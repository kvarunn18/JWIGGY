//#include<graphics.h>
/*#include <stdlib.h>
#include<conio.h>
#include <stdio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<dos.h>*/
//#include"accept_n.cpp"
#include"bordere.cpp"
#include"food.cpp"
food o[5];
void design_1 (char* p)
{



			  int		driver=9,mode=2;
					initgraph(&driver,&mode,"C:\\TURBOC3\\BGI");
					rectangle(50,0,550,475);
					settextstyle(1,0,1);
					setfillstyle(1,4);
					floodfill(190,90,15);
				       setfillstyle(1,0) ;
					rectangle(150,10,400,50);
					rectangle(500,10,550,50);
					outtextxy(501,11,"NEXT");
					outtextxy(175,10,p);
					settextstyle(0,0,0);
					rectangle(180,60,380,150);
					setfillstyle(1,0);
					floodfill(181,139,15);
					setcolor(BLACK);
					line(50,155,550,155);
					line(280,155,280,475);
					setfillstyle(1,12);
					floodfill(51,156,0);
					floodfill(281,156,0);
					setcolor(WHITE);
				       int x=260,y=160;
				       char	a[2];
				       for(int i=1; i<=11; i++)
				       {
					      //	rectangle(x-10,y,x+2,y+10);
						rectangle(x+5,y,x+15,y+10);
						outtextxy(x-9,y+1,"  +");
					      //	rectangle(x+258,y,x+270,y+10);
						rectangle(x+273,y,x+285,y+10);
						outtextxy(x+260,y+1,"  +");
						rectangle(x-33,y,x-17,y+10);
						rectangle(x+243,y,x+255,y+10);
						outtextxy(51,y+1,itoa(i,a,10));
						outtextxy(282,y+1,itoa(i+7,a,10));
						rectangle(75,y-2,200,y+13);
						setfillstyle(1,BLACK);
						floodfill(76,y,15);
						rectangle(307,y-2,432,y+13);
						setfillstyle(1,BLACK);
						floodfill(308,y,15);
						y=y+50;
					}x=260;  y=160;
						ifstream	f;
						char	h[3];
					f.open("food.dat",ios::in);
				       i=0;
					while(f.read((char*)&ob1, sizeof(ob1)))
					{
						if(strcmpi(ob1.cname,p)==0)
						  {
							outtextxy(76,y,ob1.name);
						      //	outtextxy(x-32,y,itoa(ob1.qty,h,10));
							y=y+50;
							o[i]=ob1;
							i++;
						  }
					}
						x=260;y=160;
						mouse2	m;
				      int	flag=0,u=0;;
					m.show_mouse();
			    int	      	manav,ram;
			    randomize();
					do
					{
						m.get_status_2(manav,ram);
						if(manav<x+15&&manav>x+5)
						{
								if(ram<y+10&&ram>y){


											setcolor(12);
											outtextxy(x-32,y,itoa(o[0].qty,h,10));
											delay(500);
											setcolor(WHITE);
											outtextxy(x-32,y,itoa(++o[0].qty,h,10));
										    }
								else if(ram<y+60&&ram>y+50){
													setcolor(12);
												outtextxy(x-32,y+50,itoa(o[1].qty,h,10));

												delay(500);
												setcolor(15);
												outtextxy(x-32,y+50,itoa(++o[1].qty,h,10));
											   }
								else if(ram<y+110&&ram>y+100){
													setcolor(12);
													outtextxy(x-32,y+100,itoa(o[2].qty,h,10));

												delay(500);
												setcolor(15);
												outtextxy(x-32,y+100,itoa(++o[2].qty,h,10));
												}
								else if(ram<y+160&&ram>y+150){
														setcolor(12);
													outtextxy(x-32,y+150,itoa(o[3].qty,h,10));

												delay(500);
												setcolor(15);
												outtextxy(x-32,y+150,itoa(++o[3].qty,h,10));
												}
							     else if(ram<y+210&&ram>y+200){
													setcolor(12);
													outtextxy(x-32,y+200,itoa(o[4].qty,h,10));

												delay(500);
												setcolor(15);
												outtextxy(x-32,y+200,itoa(++o[4].qty,h,10));

												}

						}
						 else if(manav>500&&ram>10&&manav<550&&ram<50) { clrscr(); break;}
				    }while(flag<=4);


}
void r1()
{
	clrscr () ;
	r();
	char	p[50];
	strcpy(p,design(s));
	design_1(p) ;
	clrscr();
}








































































































































































































































