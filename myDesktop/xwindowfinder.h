#ifndef XWINDOWFINDER_H
#define XWINDOWFINDER_H

<<<<<<< HEAD
/*#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xproto.h>
#include <X11/Xatom.h>*/
=======
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xproto.h>
#include <X11/Xatom.h>
>>>>>>> 2b6bbdfd04d126a911f79bf21b40df8acc7f39cd

#include <iostream>
#include <vector>
#include <list>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

class XWindowFinder
{
public:
<<<<<<< HEAD
   /* XWindowFinder(unsigned long pid, Display *display=NULL);
    const std::vector<Window> &result() const { return _result; };
    void print();
    bool findresult();*/
private:
   /* unsigned long  _pid;
=======
    XWindowFinder(unsigned long pid, Display *display=NULL);
    const std::vector<Window> &result() const { return _result; };
    void print();
    bool findresult();
private:
    unsigned long  _pid;
>>>>>>> 2b6bbdfd04d126a911f79bf21b40df8acc7f39cd
    Atom           _atomPID;
    Display       *_display;
    std::vector<Window>   _result;

    unsigned long getPid(Window w);
<<<<<<< HEAD
    bool search(Window w);*/
=======
    bool search(Window w);
>>>>>>> 2b6bbdfd04d126a911f79bf21b40df8acc7f39cd
};

#endif // XWINDOWFINDER_H
