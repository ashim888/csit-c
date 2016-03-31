//draws a circle in the current drawing color with its center at (150,150) and the radius (100) given by radius.

#include<graphics.h>
#include<conio.h>
main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,""); /* initialization of graphic mode */
  circle(150,150,100);
  getch();
  closegraph(); /* Restore orignal screen mode */
}