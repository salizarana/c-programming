/**
 * Write a program to draw a triangle.
 */

#include <graphics.h>

int main()
{
  int gd = DETECT, gm;

  initgraph(&gd, &gm, NULL);

  line(300, 100, 200, 200);
  line(300, 100, 400, 200);
  line(200, 200, 400, 200);

  getch();
  closegraph();

  return 0;
}
