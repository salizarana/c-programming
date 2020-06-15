/**
 * Write a program to draw a line.
 */

#include <graphics.h>

int main()
{
  int gd = DETECT, gm;

  initgraph(&gd, &gm, NULL);
  line(100, 100, 200, 100);

  getch();
  closegraph();

  return 0;
}
