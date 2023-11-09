#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<bios.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip.h>
#include<process.h>
#include"mouse.cpp"
#include"part1.cpp"
void main()
{
int color;
int gd,gm;
gd=VGA;
gm=VGAHI;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
mouse2 m;
m.show_mouse();
int manav,ram;
int x=200,y=100,i=0;
setfillstyle(1,12);
while(i<=1)
{
	rectangle(x,y,x+200,y+50);
	floodfill(x+1,y+1,15);
	if(i==0) outtextxy(x+70,y+25,"JWIGGY");
	else if(i==1) outtextxy(x+50,y+25,"BATTLESHIP");
       //	else outtextxy(x+50,y+25,"Play games");
	i++;
	y+=75;
}


	setcolor(YELLOW);
	settextstyle(3,0,7) ;
	outtextxy(175,0,"WELCOME") ;
	rectangle(500,0,100,400) ;
	setcolor(12) ;
	settextstyle(4,0,3);
	outtextxy(120,300,"* Please Select An Option ") ;
int flag=0;
do
{
	m.get_status_2(manav,ram);
	if(manav<400&&manav>200)
	{
		setlinestyle(0,0,3);setcolor(BLUE);
		if(ram<150&&ram>100){ flag=1;rectangle(199,99,401,151); delay(500);jwiggy () ;}
		else if(ram<225&&ram>175){ flag=1; rectangle(199,174,401,226); delay(500);}
	}

}while(flag==0);
cleardevice();
closegraph();
}