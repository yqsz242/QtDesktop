#include "xwindowfinder.h"

#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xproto.h>
#include <X11/Xatom.h>

#include <iostream>
#include <vector>
#include <list>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

/* Find X Window From PID
*
* Reference:
*  http://stackoverflow.com/questions/151407/how-to-get-an-x11-window-from-a-process-id
*/

  XWindowFinder::XWindowFinder(unsigned long pid, Display *display): _display(display), _pid(pid) {
    if(_display==NULL) _display = XOpenDisplay(NULL);

    _atomPID = XInternAtom(_display, "_NET_WM_PID", True);
    if(_atomPID == None) {
        cout << "No such atom" <<endl;
      return;
    }

    Window wRoot = XDefaultRootWindow(_display);
    this->search(wRoot);
  }

  void XWindowFinder::print(){
    for(std::vector<Window>::const_iterator it=_result.begin(); it !=_result.end(); it++)
        cout << "Window #" << (unsigned long)(*it) <<endl;
  }

  bool XWindowFinder::findresult(){
      return !_result.empty();
  }

    unsigned long XWindowFinder::getPid(Window w){
        Atom           type;
        int            format;
        unsigned long  nItems;
        unsigned long  bytesAfter;
        unsigned char *propPID = 0;

        if(Success == XGetWindowProperty(_display, w, _atomPID, 0, 1, False, XA_CARDINAL,
                                         &type, &format, &nItems, &bytesAfter, &propPID))
        {
            if(propPID != 0) {
              unsigned long pid = *((unsigned long *)propPID);
              XFree(propPID);
              return pid;
            }
        }
        return 0;
    }

    bool XWindowFinder::search(Window w) {
      bool found = false;

      unsigned long propPID = this->getPid(w);
      if(_pid == propPID){
        _result.push_back(w);
        return true;
      }

      // Recurse into child windows.
      Window    wRoot;
      Window    wParent;
      Window   *wChild;
      unsigned  nChildren;
      if(0 != XQueryTree(_display, w, &wRoot, &wParent, &wChild, &nChildren)) {
        for(unsigned i = 0; i < nChildren; i++){
          found = search(wChild[i]) || found;
          // found = found || search(wChild[i]);
          //if(found) break;
        }
      }
      return found;
    }

