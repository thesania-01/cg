  //Practical 2a -Four Regions
#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gdriver=DETECT, gmode;
int midx, midy;
initgraph(&gdriver,&gmode,"..\\bgi");
cleardevice();
midx=getmaxx()/2;
midy=getmaxy()/2;
line(0,midy,getmaxx(),midy);
line(midx,0,midx,getmaxy());
setcolor(RED);
circle(midx-150,midy-120,40);
setcolor(GREEN);
rectangle(midx+100,midy-100,midx+200,midy-150);
setcolor(BLUE);
ellipse(midx-150,midy+100,0,360,midx-250,midy-200);
setcolor(YELLOW);
ellipse(midx+180,midy+100,180,0,midx-200,midy-150);
getch();
closegraph();
}
