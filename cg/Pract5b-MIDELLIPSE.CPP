//Practical 5b- Program to draw an ellipse using Midpoint Ellipse 
//Algorithm
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

void emidpt(int,int,int,int);
void eplot(int,int,int,int);

void main()
{
int gd=DETECT, gm;
int xc,yc,a,b;
clrscr();
initgraph(&gd,&gm,"");
cout<<"Enter the coordinates of the centre of the ellipse : ";
cin>>xc;
cin>>yc;
cout<<"Enter the radius of the ellipse along x axis: ";
cin>>a;
cout<<"Enter the radius of the ellipse along y axis: ";
cin>>b;
emidpt(xc,yc,a,b);
getch();
closegraph();
}

void emidpt(int xc, int yc, int a, int b)
{
long a2=a*a;
long b2=b*b;
long x;
long y;
float P;

x=0;
y=b;

P=b2-(a2*b)+(0.25*a2);
while (x<=y)
{
	eplot(xc,yc,x,y);
	if (P<0)
	{
		P=P+2*b2*(x+1)+b2;
	}
	else
	{
		P=P+2*b2*(x+1)-2*a2*(y-1)+b2;
		y=y-1;
	}
	x=x+1;
}

P=(b2*(x+0.5)*(x+0.5))+(a2*(y-1)*(y-1))-(a2*b2);
while (y>=0)
{
	eplot(xc,yc,x,y);
	if (P>=0)
	{
		P=P-2*a2*(y-1)+a2;
	}
	else
	{
		P=P+2*b2*(x+1)-2*a2*(y-1)+a2;
		x=x+1;
	}
	y=y-1;
}
}

void eplot(int xc, int yc, int x, int y)
{
	putpixel(xc+x,yc+y,10);
	putpixel(xc-x,yc+y,10);
	putpixel(xc+x,yc-y,10);
	putpixel(xc-x,yc-y,10);
}
