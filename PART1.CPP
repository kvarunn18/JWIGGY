/*#include<iostream.h>
//#include<bmplib.h>
#include<string.h>
#include<graphics.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<bios.h>*/
#include"loginpag.cpp"
//#include"mouse.cpp"
#include"sathu.cpp"
#include"bill.cpp"
void jwiggy()
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
//LoadBmp(190,0,"test.bmp");
int x=200,y=100,i=0;
setfillstyle(1,12);
while(i<=1)
{
	rectangle(x,y,x+200,y+50);
	floodfill(x+1,y+1,15);
	if(i==0) outtextxy(x+50,y+25,"Login as User");
	else if(i==1) outtextxy(x+50,y+25,"Create Account");
	i++;
	y+=75;
}
int flag=0;
do
{
	m.get_status_2(manav,ram);
	if(manav<400&&manav>200)
	{
		setlinestyle(0,0,3);setcolor(BLUE);
		if(ram<150&&ram>100){ flag=1;rectangle(199,99,401,151); delay(500);login_user();sathu() ;}
		else if(ram<225&&ram>175){ flag=1; rectangle(199,174,401,226); delay(500);create_user();login_user();sathu() ;}
	}
}while(flag==0);
cleardevice();
closegraph();
}