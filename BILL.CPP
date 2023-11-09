
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
#include"bbb.cpp"
#include"final.cpp"
int	total=0 ;
void bill()
{
	int		driver=9,mode=2;
					initgraph(&driver,&mode,"C:\\TURBOC3\\BGI");
					rectangle(50,0,550,475);
					settextstyle(1,0,1);
					setfillstyle(1,4);
					floodfill(190,90,15);
				       setfillstyle(1,0) ;
				       rectangle(150,10,400,50);
				      outtextxy(210,20,"BILLING");
				      char	a1[3],a2[3],a3[3],a4[3];
				      //int	total=0;
				      outtextxy(55,50,"S.No");
				      outtextxy(100,50,"Item");
				      outtextxy(300,50,"Qty");
				      outtextxy(355,50,"Cost");
				      outtextxy(455,50,"Price");
				      outtextxy(380,395,"Total:");
				     for(int i=0,u=1,x=20; i<5; i++,x=x+20)
				      {
						if(o[i].qty>=1){
									outtextxy(55,50+x,itoa(u,a4,10)) ;
									outtextxy(100,50+x,o[i].name);
									outtextxy(300,50+x,itoa(o[i].qty,a1,10));
									outtextxy(355,50+x,itoa(o[i].cost,a2,10));
									outtextxy(455,50+x,itoa(o[i].cost*o[i].qty,a3,10));
									total+=o[i].cost*o[i].qty;u++;

							       }

				      }
				     outtextxy(275,450,"CLICK ON TOTAL TO CONTINUE");
				     /* rectangle(425,395,500,420);
				      outtextxy(427,396,itoa(total,a5,10));
				      mouse2	m; int flag=0;
				      m.show_mouse();
				      int	manav,ram;
				      do
				      {
					m.get_status_2(manav,ram);
					if(manav>425&&manav<500&&ram>395&&ram<420)	flag=1;
					}while(flag==0);
					if(flag==1)   {
							clrscr();
							fin();
							}*/


}
void sathu()
{
	char	a5[3] ;
	 r1();
	bill();
	rectangle(425,395,500,420);
				      outtextxy(427,396,itoa(total,a5,10));
				      mouse2	m; int flag=0;
				      m.show_mouse();
				      int	manav,ram;
				      do
				      {
					m.get_status_2(manav,ram);
					if(manav>425&&manav<500&&ram>395&&ram<420)	flag=1;
					}while(flag==0);
					if(flag==1)   {
							clrscr();
							fin();
							}

}
