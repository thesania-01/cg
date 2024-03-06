//Practical 7a- Program to demonstrate 2-D rotation
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void drawpoly(int,int[],int[],double);
void main()
{
int gdriver=DETECT, gmode;
int x[20], y[20],i, s;
double theta=0, thetarad=0;
initgraph(&gdriver,&gmode,"");
cout<<"No. of sides: ";
cin>>s;
cout<<"Co-ordinates: ";
for(i=0;i<s;i++)
{
	cout<<"x["<<i<<"]";
	cin>>x[i];
	cout<<"y["<<i<<"]";
	cin>>y[i];
}
drawpoly(s,x,y,thetarad);
cout<<"Rotation(theta): ";
cin>>theta;
thetarad=theta*22/7/180;
drawpoly(s,x,y,thetarad);
getch();
closegraph();
}

void drawpoly(int s,int x[20],int y[20],double theta)
{
int i;
if (theta==0)
{
	for(i=0;i<s;i++)
	{
		if(i!=(s-1))
		{
			line(x[i],y[i],x[i+1],y[i+1]);
		}
		else
		{
			line(x[i],y[i],x[0],y[0]);
		}
	}
}
else
{
	for(i=0;i<s;i++)
	{
		if(i!=(s-1))
		{
			line( x[i]*cos(theta) - y[i]*sin(theta),
				x[i]*sin(theta) + y[i]*cos(theta),
				x[i+1]*cos(theta) - y[i+1]*sin(theta),
				x[i+1]*sin(theta) + y[i+1]*cos(theta) );
		}
		else
		{
			line(x[i]*cos(theta)-y[i]*sin(theta),
				x[i]*sin(theta)+y[i]*cos(theta),
				x[0]*cos(theta)-y[0]*sin(theta),
				x[0]*sin(theta)+y[0]*cos(theta));
		}
	}
}
}