/*#include<graphics.h>
#include <stdlib.h>
#include<conio.h>
#include <stdio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<dos.h>*/
void fin()
{
			int		driver=9,mode=2;
					initgraph(&driver,&mode,"C:\\TURBOC3\\BGI");
					rectangle(50,0,550,475);
					settextstyle(1,0,1);
					setfillstyle(1,4);
					floodfill(190,90,15);
				       setfillstyle(1,0) ;
				       outtextxy(250,100,"DEAR USER");
				       outtextxy(150,150," YOUR ORDER");
				       outtextxy(150,200," WILL BE DELIVERED");
				       outtextxy(150,250," SOON");
				       delay(7000) ;
}
/*void main()
{
	fin();
	getch();
} */
