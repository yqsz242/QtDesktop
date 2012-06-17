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

int main(int argc, char **argv){

  //if(argc>=3 && strcmp(argv[1],"pid")==0){
    int pid = 8629;//atoi(argv[2]);
    cout<<pid<<endl;
    XWindowFinder finder(pid);
    finder.print();
    //return 0;
  //}
  return 0;
}
