//Practical 10 c- Moving car
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, "..\\bgi");
int i=0, maxx, midy;
maxx=getmaxx();
midy=getmaxy()/2;
//road
line(0,midy,maxx,midy);
while(i<=maxx)
{
//car
//wheels
circle(50+i,midy-10,10);
circle(120+i,midy-10,10);

//floodfill(50,midy-5,DARKGRAY);

//car body
//lower part
line(10+i,midy-10,30+i,midy-10);
line(70+i,midy-10,100+i,midy-10);
line(140+i,midy-10,170+i,midy-10);
line(10+i,midy-50,10+i,midy-10);
line(170+i,midy-50,170+i,midy-10);
arc(50+i, midy-10, 0,180,20);
arc(120+i, midy-10, 0,180,20);
//upper part
line(50+i,midy-50,110+i, midy-50);
line(10+i,midy-50,30+i,midy-50);
line(120+i,midy-50,170+i,midy-50);
line(30+i,midy-50,50+i,midy-80);
line(50+i,midy-80,100+i,midy-80);
line(100+i,midy-80,120+i,midy-50);
i++;
delay(100);
clrscr();
}

getch();
closegraph();
}