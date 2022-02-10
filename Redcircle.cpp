#include <graphics.h> 
#include <stdio.h>
#include <conio.h>
int main ()
{
int gd = DETECT, gm;
int  x,y,radius;
initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
setcolor(RED); 
circle(x,y,30);
getch();
closegraph();
return 0;
}
