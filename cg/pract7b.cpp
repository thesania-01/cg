//Practical 7b(i)- Program to create a house like figure
//and scale it about origin followed by translation
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>

void draw(int,int[],int[]);
void translate(int, int[], int[], int, int);
void scale(int, int[], int[], int, int);
void reflect(int, int[], int[], float, int);
void rotate(int, int[], int[], double);

void main()
{
int x[20], y[20],tx, ty,sx,sy, i, s,choice,px,py, m, c;
int gdriver=DETECT, gmode;
initgraph(&gdriver,&gmode,"..\\bgi");
line(320,0,320,480);  //vertical line
line(0,240,640,240); //horizontal line
cout<<"No. of sides: ";
cin>>s;
cout<<"Co-ordinates: ";
for(i=0;i<s;i++)
{
	cout<<"x["<<i<<"] : ";
	cin>>x[i];
	cout<<"y["<<i<<"] : ";
	cin>>y[i];
}
draw(s,x,y);
cout<<"Press 1 for Scaling about origin followed by translation\n";
cout<<"Press 2 for Scaling about arbitrary point\n";
cout<<"Press 3 for Reflection about the line y=mx+c";
cin>>choice;
switch(choice)
{
	case 1:
		cout<<"Scaling(x,y): ";
		cin>>sx>>sy;
		cout<<"Translation(x,y): ";
		cin>>tx>>ty;
		scale(s,x,y,sx,sy);
		//draw(s,x,y);
		//delay(200);
		translate(s,x,y,tx,ty);
		draw(s,x,y);
		break;

	case 2:
		cout<<"Scaling(x,y): ";
		cin>>sx>>sy;
		cout<<"Enter coordinates of the point(x,y): ";
		cin>>px>>py;
		translate(s,x,y,-px,-py);
		//draw(s,x,y);
		//delay(200);
		scale(s,x,y,sx,sy);
		//draw(s,x,y);
		//delay(200);
		translate(s,x,y,px,py);
		draw(s,x,y);
		break;
	case 3:
		cout<<"Enter the value of slope (m):";
		cin>>m;
		cout<<"Enter the value of y intercept (c)";
		cin>>c;
		reflect(s,x,y,m,c);
		draw(s,x,y);
		break;
 }
getch();
cleardevice();
closegraph();
}

void draw(int s,int x[20],int y[20])
{
int i;

for(i=0;i<s;i++)
{
	if(i!=(s-1))

		line(320+x[i],240+y[i],320+x[i+1],240+y[i+1]);
	else
		line(320+x[i],240+y[i],320+x[0],240+y[0]);
}
}

void scale(int s,int x[20],int y[20],int sx, int sy)
{
int i;
for(i=0;i<s;i++)
{
	x[i]=x[i]*sx;
	y[i]=y[i]*sy;
}
}

void translate(int s,int x[20],int y[20],int tx,int ty)
{
int i;
for(i=0;i<s;i++)
{
	x[i]=x[i]+tx;
	y[i]=y[i]+ty;
}
}

void reflect(int s,int x[20],int y[20],float m, int c)
{
int i;
float angle;
for(i=0;i<s;i++)
{
	y[i]=y[i]-c;
}
angle=atan(m);
rotate(s,x,y,angle);
for(i=0;i<s;i++)
{
	x[i]=-x[i];
}
rotate(s,x,y,-angle);
for(i=0;i<s;i++)
{
	y[i]=y[i]+c;
}
}

void rotate(int s, int x[20], int y[20], double theta)
{
int i;
for(i=0;i<s;i++)
{
		if(i!=(s-1))
		{
			line( x[i]*cos(theta) - y[i]*sin(theta)+320,
				x[i]*sin(theta) + y[i]*cos(theta)+240,
				x[i+1]*cos(theta) - y[i+1]*sin(theta)+320,
				x[i+1]*sin(theta) + y[i+1]*cos(theta) +240);
		}
		else
		{
			line(x[i]*cos(theta)-y[i]*sin(theta)+320,
				x[i]*sin(theta)+y[i]*cos(theta)+240,
				x[0]*cos(theta)-y[0]*sin(theta)+320,
				x[0]*sin(theta)+y[0]*cos(theta)+240);
		}
}
}