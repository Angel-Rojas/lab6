// modifer: Angel Rojas
// date: 3-2-18
// purpose: Lab 6
// filename: angelR.cpp
//
//
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;
#include <unistd.h>
#include <X11/Xlib.h>
//#include <X11/Xutil.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"
	
//function prototypes
void render();
void showName();

//==========================================================================
// M A I N
//==========================================================================
	
void showName()
{
	//glClear(GL_COLOR_BUFFER_BIT);
	//
	Rect r;
	r.bot = 820;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ff0000, "Angel");
	//ggprint8b(&r, 16, 0x00ffff00, "n asteroids destroyed: ");
	//
	return;
	//glEnd();
}






