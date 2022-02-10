//c++ program to implement DDA line drawing algorithm

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int x,y,x1,y1,x2,y2,dx,dy,step,xinc,yinc,i,gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
printf("enter the starting coordinate");
scanf("%d%d",&x1,&y1);
printf("enter the ending coordinate");
scanf("%d%d",&x2,&y2);
dx=(x2-x1);
dy=(y2-y1);
if(abs(dx)>=abs(dy))
step=abs(dx);
else
step=abs(dy);
xinc=dx/step;
yinc=dy/step;
x=x1;
y=y1;
putpixel(x,y,4);
for(i=0;i<step;i++)
{
x=x+xinc;
y=y+yinc;

putpixel(x,y,4);
}
getch();
closegraph();
}
