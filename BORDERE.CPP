#include"searchbar.cpp"
/*#include<bios.h>
#include<dos.h>
#include<process.h>
#include"mouse.cpp"
#include<graphics.h>
#include <stdlib.h>
#include<conio.h>
#include <stdio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>*/
char	s[50];
char* design (char* st)
{

			  int		gd=DETECT,gm;
					initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
					rectangle(50,0,550,475);
					settextstyle(1,0,1);
					setfillstyle(1,4);
					floodfill(190,90,15);
				       setfillstyle(1,0) ;
					rectangle(150,10,400,50);
					outtextxy(200,10,st);
					settextstyle(0,0,0);
					rectangle(180,60,380,150);
					setfillstyle(1,0);
					floodfill(181,139,15);
					setcolor(BLACK);
					line(50,155,550,155);
					setfillstyle(1,12);
					floodfill(51,156,0);
					floodfill(281,156,0);
					setcolor(WHITE);
				       int x=260,y=160;
				       char	a[2];
				       for(int i=1; i<=11; i++)
				       {
						rectangle(75,y-2,350,y+13);
						setfillstyle(1,BLACK);
						floodfill(76,y,15);
						floodfill(307,y,15);
						outtextxy(51,y+1,itoa(i,a,10));
						y=y+50;
					}
					int flag=0;
					ifstream	f;
					f.open("rest.dat",ios::in);
					while(flag==0&&f.read((char*)&ob, sizeof(ob)))
					{
						if(strcmpi(st,ob.na)==0)
							flag=1;
					}
					y=160 ;
					if(flag==1)
					{
						for(int k=0; k<5; k++)
						{
							outtextxy(76,y,ob.a[k]);
							y=y+50;
						}
					}
					mouse2	m;
					flag=0;
					m.show_mouse();
			    int	      	manav,ram;
				   do
				    {
					m.get_status_2(manav,ram);
					if(manav<350&&manav>75)
					{
						setlinestyle(0,0,3);setcolor(BLUE);
						if(ram<173&&ram>158){ flag=1;
									delay(500);
									return ob.a[0];
								    }
						else if(ram<223&&ram>208){ flag=1; delay(500);return ob.a[1]; }
						else if(ram<273&&ram>258){ flag=1;delay(500);return ob.a[2]; }
						else if(ram<323&&ram>308){ flag=1;delay(500);return ob.a[3];}
						else if(ram<373&&ram>358){ flag=1;delay(500);return ob.a[4];}
					      //	else if(ram<373&&ram>358){ flag=1;delay(500);return ob.a[5];}
					}
				    }while(flag==0);
}
void r()
{
	strcpy(s,lay());
	clrscr();
}








































































































































































































































