#include <graphics.h>
#include <dos.h>
#include <conio.h>
 
int main()
{
   int gd = DETECT, gm, i;
   char a[5];
 
   initgraph( &gd, &gm, "C:\\TC\\BGI");
 
   settextjustify( CENTER_TEXT, CENTER_TEXT );
   settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
   setcolor(RED);
 
   for (i = 30; i >=0; i--)
   {
      sprintf(a,"%d",i);
      outtextxy(getmaxx()/2, getmaxy()/2, a);
      delay(1000);
 
      if ( i == 0 )
         break;
      cleardevice();
   }
 
   getch();
   closegraph();
   return 0;
}