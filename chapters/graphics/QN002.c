/**
 * Write a program to draw a circle.
 */

#include <graphics.h>

int main()
{
  int gd = DETECT, gm;

  initgraph(&gd, &gm, "");
  circle(100, 150, 50);

  getch();
  closegraph();

  return 0;
}
