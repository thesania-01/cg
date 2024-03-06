//Practical 4a- DDA Line Drawing Algorithm

#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>

void DDALine(float, float, float, float);
//Main Function
void main()
{
 float x1,x2,y1,y2;
 int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"..\\bgi");
clrscr();
 cout<<"Enter the coordinates of the starting point: ";
 cin>>x1;
cin>>y1;
 cout<<"Enter the coordiantes of the end point: ";
cin>>x2;
cin>>y2;
 DDALine(x1,y1,x2,y2);
 getch();
 closegraph();
}

//DDA Line Drawing Function
void DDALine(float x1, float y1, float x2, float y2)
{
 float x,y,deltax,deltay,dx,dy;
 int step,i;
 x=x1;
 y=y1;
 deltax=x2-x1;
 deltay=y2-y1;
 if (fabs(deltax) >= fabs(deltay) )
	step = fabs(deltax);
 else
	step=fabs(deltay);

 dx=(deltax)/step;
 dy=(deltay)/step;

 i=1;
 while(i<=step)
 {
	putpixel(x,y,3);
	x=x+dx;
	y=y+dy;
	i=i+1;
  }
}

