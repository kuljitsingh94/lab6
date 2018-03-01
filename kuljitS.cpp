// program: kujlitS.cpp 
// author:  Kuljit Singh

#include "fonts.h"
#include <GL/glx.h>

void showName(int x, int y, int size, int color)
{
    Rect r;
    r.bot = y;
    r.left = x;
    r.center = 0;
    ggprint8b(&r, size, color, "Kuljit Singh");

}

void drawBox(int x, int y)
{
    //Draw the box
    static float angle = 0.0;
    glColor3ub(255, 0, 0);
    glPushMatrix();
    glTranslatef(x, y, 0.0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-50.0, -50.0, 0.0);
    angle = angle + 2.5;
    glBegin(GL_QUADS);
        glVertex2f(0  ,   0);
        glVertex2f(0  , 100);
        glVertex2f(100, 100);
        glVertex2f(100,   0);
    glEnd();
    
    Rect r;
    r.bot = 50;
    r.left = 50;
    r.center = 1;
    ggprint8b(&r, 16, 0xffffffff, "Kuljit Singh");
    
    glPopMatrix();

}
