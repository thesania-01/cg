  //Practical 5a- Midpoint Circle Drawing Algorithm
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void MidptCirc(float,float,float);

//Main Function
void main()
{
float xc, yc,r;
int gdriver=DETECT, gmode;
initgraph(&gdriver,&gmode,"..\\bgi");
clrscr();
cout<<"Enter the value of xc: ";
cin>>xc;
cout<<"Enter the value of yc: ";
cin>>yc;
cout<<"Enter the value of radius:";
cin>>r;
MidptCirc(xc,yc,r);
getch();
closegraph();
}

//Midpoint Circle function
void MidptCirc(float xc,float yc,float r)
{
float x,y,P;
P=(5/4)-r;
x=0;
y=r;
while(x<=y)
{
	putpixel(xc+x,yc+y,1);
	putpixel(xc+y,yc+x,2);
	putpixel(xc+y,yc-x,3);
	putpixel(xc+x,yc-y,4);
	putpixel(xc-x,yc-y,5);
	putpixel(xc-y,yc-x,6);
	putpixel(xc-y,yc+x,3);
	putpixel(xc-x,yc+y,8);
	delay(100);

	if(P<0)
	{
		P=P+2*x+3;
	}
	else
	{
		P=P+2*x-2*y+5;
		y=y-1;
	}
	x=x+1;
}
}