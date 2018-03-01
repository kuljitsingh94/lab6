// author: Kuljit Singh

#include "fonts.h"

void showName(int x, int y, int size, int color)
{
    Rect r;
    r.bot = y;
    r.left = x;
    r.center = 0;
    ggprint8b(&r, size, color, "Kuljit Singh");

}
