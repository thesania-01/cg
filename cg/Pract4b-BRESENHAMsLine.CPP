//Practical 4b- Bresenhams Line drawing Algorithm
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void BresLine(float,float,float,float);
//Main Function
void main()
{
float x1,y1,x2,y2;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"..\\bgi");
clrscr();
cout<<"Enter the coordinates of the starting point: ";
 cin>>x1;
cin>>y1;
 cout<<"Enter the coordinates of the end point: ";
cin>>x2;
cin>>y2; 
BresLine(x1,y1,x2,y2);
getch();
closegraph();
}

void BresLine(float x1,float y1,float x2,float y2)
{
float x,y,dx,dy,P;
int i;
x=x1;
y=y1;
dx=fabs(x2-x1);		//deltax
dy=fabs(y2-y1);		//deltay	
if (dy<=dx)  //m<=1
{
	P=2*dy-dx;  //p0
	i=1;
	while(i<=dx)
	{
		putpixel(x,y,1);
		if(P<0)   //Pk
		{
			P=P+2*dy;    //Pk+1
		}
		else
		{
			y=y+1;
			P=P+2*dy-2*dx;
		}
		x=x+1;
		i=i+1;
	}
}
else   //m>1
{
	P=2*dx-dy;
	i=1;
	while(i<=dy)
	{
		putpixel(x,y,1);
		if (P<0)
		{
			P=P+2*dx;
		}
		else
		{
			P=P+2*dx-2*dy;
			x=x+1;
		}
		y=y+1;
		i=i+1;
	}
}
}