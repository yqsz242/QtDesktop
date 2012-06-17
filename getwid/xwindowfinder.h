#ifndef XWINDOWFINDER_H
#define XWINDOWFINDER_H

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

class XWindowFinder
{
public:
    XWindowFinder(unsigned long pid, Display *display=NULL);
    const std::vector<Window> &result() const { return _result; };
    void print();
private:
    unsigned long  _pid;
    Atom           _atomPID;
    Display       *_display;
    std::vector<Window>   _result;

    unsigned long getPid(Window w);
    bool search(Window w);
};

#endif // XWINDOWFINDER_H
