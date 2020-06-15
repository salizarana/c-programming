/**
 * Write a program to draw an ellipse and write inside it.
 */

#include <graphics.h>

int main()
{
  int gd = DETECT, gm;

  initgraph(&gd, &gm, NULL);

  setcolor(RED);
  ellipse(100, 100, 0, 360, 50, 25);
  floodfill(100, 100, RED);
  outtextxy(70, 95, "Welcome");

  getch();
  closegraph();

  return 0;
}
