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

//==========================================================================
// M Y O W N F I L E :)
//==========================================================================
void drawBox(int x,int y)
{
	static float angle = 0.0;
	// red grn blu
	glColor3ub(150, 1, 200);
         glPushMatrix();
         glTranslatef(x, y, 0);
		 angle = angle + 2.5;
         glRotatef(angle, 0.0f, 0.0f, 1.0f);
         glTranslatef(-50, -50, 0);
		 //angle = angle + 2.5;
    glBegin(GL_QUADS);
         glVertex2i( 0,		0);
         glVertex2i( 0,	  100);
         glVertex2i(100,  100);
         glVertex2i(100,	0);
    glEnd();
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POINTS);
                 glVertex2f(0.0f, 0.0f);
    glEnd();
	Rect c;
	c.bot = 50;
	c.left = 50;
	c.center = 1; // flag: 0 or 1
	ggprint8b(&c, 16, 0x00AAffAB, "Angel");
    glPopMatrix();
}

void showName()
{
	Rect r;
	r.bot = 820;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ff0000, "Angel");
	//ggprint8b(&r, 16, 0x00ffff00, "n asteroids destroyed: ");
}

// Was testing some func about passing Global Var to and from files
/*void passGlob(int &globVar)
{
	globVar = 5;
	//return globVar;
}*/


