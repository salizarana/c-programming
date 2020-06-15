/**
 * Write a program to draw a square.
 */

#include <graphics.h>

int main()
{
  int gd = DETECT, gm;

  int left = 100, top = 100;
  int right = 300, bottom = 300;

  initgraph(&gd, &gm, "");
  rectangle(left, top, right, bottom);

  getch();
  closegraph();

  return 0;
}
