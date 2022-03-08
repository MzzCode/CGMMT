//c++ program to implement 2D transformation

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gdriver = DETECT,gmode,ch;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
cleardevice();
printf("\t1.TRANSLATION\n\n\t2.ROTATION\n\n\t3.SCALING\n\n\t4.REFLECTION\n\n\t");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
    int tx=50,ty=50,x1=100,x2=230,y1=100,y2=70;
    cleardevice();
    printf("rectangle before translation:\n");
    getch();
    cleardevice();
    printf("rectangle after translation:\n");
    rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
    getch();
    main();
    }
case 2:
{
    long x1=100,y1=100,x2=200,y2=200;
    double d1,xt,yt;
    cleardevice();
    printf("enter angle of rotation");
    scanf("%if",&d1);
    d1=(d1*3.14)/180.0;


    xt=x1+((x2-x1)*cos(d1)-(y2-y1)*sin(d1));
    yt=y1+((x2-x1)*sin(d1)+(y2-y1)*cos(d1));
    line(x1,y1,x2,y2);
    getch();
    printf("line after rotation");
    line(x1,y1,(int)xt,(int)yt);
    getch();
    main();
    }
    case 3:
    {
      int x1=30,y1=30,x2=70,y2=70,x=2,y=2;
      cleardevice();
      printf("\nRectangle before scaling\n");
      rectangle(x1,y1,x2,y2);
      getch();
      cleardevice();
      printf("\n\nrectangle after scaling\n");
      rectangle(x1*x,y1*y,x2*x,y2*y);
      getch();
      main();
      }
case 4:
{
      int x1=50,y1=150,x2=75,y2=125,x3=100,y3=150;
      cleardevice();
      printf("\n\n\n Triangle before reflection");
      line(x1,y1,x2,y2);
      line(x1,y1,x3,y3);
      line(x2,y2,x3,y3);
      getch();
      cleardevice();
      printf(" Triangle after reflection");
      line(x1,-y1+200,x2,-y2+200);
      line(x1,-y1+200,x3,-y3+200);
      line(x2,-y2+200,x3,-y3+200);
      getch();
      main();
      }    
}
closegraph();
}
