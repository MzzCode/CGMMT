#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
	int x = r, y = 0,P,gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	putpixel( x + x_centre, y + y_centre,RED);
	if (r > 0)
	{
		putpixel( x + x_centre, -y + y_centre,RED);
		putpixel( y + x_centre, x + y_centre,RED);
		putpixel( -y + x_centre, x + y_centre,RED);
	}
	 P = 1 - r;
	while (x > y)
	{
		y++;
		if (P <= 0)
			P = P + 2*y + 1;
		else
		{
			x--;
			P = P + 2*y - 2*x + 1;
		}
		if (x < y)
			break;
		putpixel( x + x_centre, y + y_centre,RED);
		putpixel(-x + x_centre, y + y_centre,RED);
		putpixel(x + x_centre, -y + y_centre,RED);
		putpixel(-x + x_centre, -y + y_centre,RED);
		if (x != y)
		{
			putpixel(y + x_centre, x + y_centre,RED);
			putpixel(-y + x_centre, x + y_centre,RED);
			putpixel(y + x_centre, -x + y_centre,RED);
			putpixel(-y + x_centre, -x + y_centre,RED);
		}
	}
	getch();
	closegraph();
}
int main()
{
	midPointCircleDraw(200,200,150);
	return 0;
}
