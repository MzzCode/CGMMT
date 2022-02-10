//C++ program to implement Bresenham Line Drawing Algorithm

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1)
    {
	if(p>=0)
	{
	    putpixel(x,y,7);
	    y=y+1;
	    p=p+2*dy-2*dx;
	}
	else
	{
	    putpixel(x,y,7);
	    p=p+2*dy;}
	    x=x+1;
	}
       getch();
       closegraph();
}
int main()
{
    int gd=DETECT, gm, error, x0=20, y0=40, x1=80, y1=90;
    initgraph(&gd, &gm,"c:\\turboc3\\bgi");
    printf("Bresenham line drawing algorithm\n");
    printf("enter cordinate of first point");
    scanf("%d%d",&x0, &y0);
    printf("enter cordinate of second point");
    scanf("%d%d",&x1, &y1);
    drawline(x0, y0, x1, y1);
    return 0;
}
