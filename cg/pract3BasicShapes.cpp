//Practical 3- Drawing Basic Shapes
#include<graphics.h>
#include<iostream.h>
void main()
{
int gd=DETECT, gm, left=100, top=100, right=200, bottom=200, x=300, y=150, radius=50;
initgraph(&gd,&gm,"..\\bgi");
setcolor(WHITE);
rectangle(120,150,230,200);
circle(x,y,radius);

//to draw square
bar(left+300,top,right+300,bottom);
line(left-10,top+150,left+410,top+150);
ellipse(x,y+200,0,360,80,50);

//to draw concentric circles
for(radius=25;radius<=100;radius=radius+20)
	circle(500,350,radius);
getch();
closegraph();
}