//c++ program to implement bresenham circle drawing algorithm

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int xc,yc,x,y,r,gd=DETECT,gm,d;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("bresenham's circle drawing algorithm\n");
printf("enter the coordinates of the circle:");
scanf("%d%d",&xc,&yc);
printf("enter the radius:");
scanf("%d",&r);
d=3-2*r;
x=0;
y=r;
while(x<=y)
{
putpixel(xc+x,yc+y,RED);
putpixel(xc-x,yc-y,RED);
putpixel(xc+x,yc-y,BLUE);
putpixel(xc-x,yc+y,BLUE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc-x,WHITE);
putpixel(xc+y,yc-x,GREEN);
putpixel(xc-y,yc+x,GREEN);
if(d<=0)
{
x=x+1;
d=d+4*x+6;
}
else
{
x=x+1;
y=y-1;
d=d+4*(x-y)+10;
}
}
getch();
closegraph();
}
