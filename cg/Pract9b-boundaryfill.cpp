//Implementation of Boundary Fill polygon filling algorithm

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void bfill(int x,int y,int fill,int boundary)
{
int current;
current=getpixel(x,y);
if((current!=boundary)&&(current!=fill))
{
putpixel(x,y,fill);
delay(10);
bfill(x+1,y,fill,boundary);
bfill(x-1,y,fill,boundary);
bfill(x,y+1,fill,boundary);
bfill(x,y-1,fill,boundary);
bfill(x+1,y+1,fill,boundary);
bfill(x+1,y-1,fill,boundary);
bfill(x-1,y+1,fill,boundary);
bfill(x-1,y-1,fill,boundary);
}
}
void main()
{
int gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
rectangle(50,50,100,100);
bfill(75,75,3,15);
getch();
closegraph();
}
