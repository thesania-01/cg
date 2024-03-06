//Practical 6a- Program to demonstrate 2-D scaling
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void drawpoly(int,int[],int[],int,int);
void main()
{
int gdriver=DETECT, gmode;
int x[20], y[20], sx=1, sy=1, i, s;
initgraph(&gdriver,&gmode,"..\\bgi");
cout<<"No. of sides: ";
cin>>s;
cout<<"Co-ordinates: ";
for(i=0;i<s;i++)
{
	cout<<"(x"<<i<<", y"<<i<<")";
	cin>>x[i]>>y[i];
}
drawpoly(s,x,y,sx,sy);

cout<<"Scaling(x,y): ";
cin>>sx>>sy;
drawpoly(s,x,y,sx,sy);
getch();
closegraph();
}

void drawpoly(int s,int x[20],int y[20],int sx,int sy)
{
int i;
for(i=0;i<s;i++)
{
	if(i!=(s-1))
		line(x[i]*sx,y[i]*sy,x[i+1]*sx,y[i+1]*sy);
	else
		line(x[i]*sx,y[i]*sy,x[0]*sx,y[0]*sy);
}
}

no. of sides- 3
coordinates- (50,50), (50,100), (75,75)
scaling factors- 2  3
