/**
 * Write a program to draw a quarter circle.
 */

#include <graphics.h>

int main()
{
  int gd = DETECT, gm;

  initgraph(&gd, &gm, NULL);

  line(100, 100, 200, 100);
  line(100, 100, 100, 200);
  arc(100, 100, 0, 90, 100);

  getch();
  closegraph();

  return 0;
}
