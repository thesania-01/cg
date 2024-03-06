//Practical 6b- Program to demonstrate 2-D translation
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void drawpoly(int,int[],int[],int,int);
void main()
{
int x[20], y[20], tx=0, ty=0, i, fs;
int gdriver=DETECT, gmode;
initgraph(&gdriver,&gmode,"..\\bgi");
cout<<"No. of sides: ";
cin>>fs;
cout<<"Co-ordinates: ";
for(i=0;i<fs;i++)
{
	cout<<"x["<<i<<"] : ";
	cin>>x[i];
	cout<<"y["<<i<<"] : ";
	cin>>y[i];
}
drawpoly(fs,x,y,tx,ty);
cout<<"Translation(x,y): ";
cout<<"tx: ";
cin>>tx;
cout<<"ty: ";
cin>>ty;
drawpoly(fs,x,y,tx,ty);
getch();
closegraph();
}

void drawpoly(int fs,int x[20],int y[20],int tx,int ty)
{
int i;
for(i=0;i<fs;i++)
{
	if(i!=(fs-1))
		line(x[i]+tx,y[i]+ty,x[i+1]+tx,y[i+1]+ty);
	else
		line(x[i]+tx,y[i]+ty,x[0]+tx,y[0]+ty);
}
}
