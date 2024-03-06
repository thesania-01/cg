//Practical 10 b- Smiling Face
#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, "..\\bgi");
//face
circle(200,200,50);
//left eye
circle(190,190,5);
arc(190,190,50,130,10);
//right eye
circle(210,190,5);
arc(210,190,50,130,10);
//nose
circle(200,205,5);
//smiley lips
arc(200,210,180,0,20);
getch();
closegraph();
}