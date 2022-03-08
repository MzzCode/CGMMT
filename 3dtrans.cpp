//c++ program to implement 3D transformation

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int maxx,maxy,midx,midy;

void axis()
{
  getch();
  cleardevice();
  line(midx,0,midx,maxy);
  line(0,midy,maxx,midy);
}
void main()
{
  int gd,gm,x,y,z,ang,x1,x2,y1,y2;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"C:\\turboc3\\bgi");
  setfillstyle(3,25);
  maxx=getmaxx();
  maxy=getmaxy();
  midx=maxx/2;
  midy=maxy/2;
  outtextxy(100,100, "ORIGINAL OBJECT");
  line(midx,0,midx,maxy);
  line(0,midy,maxx,midy);
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  axis();
  outtextxy(100,20, "TRANSLATION");
  printf("\n\n Enter the Translation vector: ");
  scanf("%d%d",&x,&y);
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+(x+100),midy-(y+20),midx+(x+60),midy-(y+90),20,5);
  axis();
  closegraph();
}
