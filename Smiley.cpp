#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
int gd = DETECT, gm;
initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");
circle (200,200,30);
circle(190,190,5);
circle(210,190,5);
arc(200,210,180,360,10);
getch();
closegraph(); 
return 0;
}
