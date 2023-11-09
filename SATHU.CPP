//#include"accept_n.cpp"
#include<graphics.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<dos.h>
	char	st[100],x[20]        ;
class act
{
	char username[50];
	char password[50];
	char address[100];
	public: void input()
		{
			gets(username);
			gets(password);
			gets(address);
		}
		char* name_return()
		{ return username;
		}
		char* pass_return()
		{ return password;
		}
		char* add_return()
		{ return address;
		}
		void create (char *) ;
		void check (char*) ;
}obb;
void act :: create(char *st)
{
	char x[20] ;
	char	opt ;
						fstream		f;

				f.open("user.dat",ios::binary|ios::app) ;

			  int		driver=9,mode=2;
					initgraph(&driver,&mode,"C:\\TC\\BGI");
					rectangle(160,80,450,340);
					settextstyle(7,0,2);
					setfillstyle(1,12);
					floodfill(190,90,15);
					outtextxy(200,90," CREATE ACCOUNT ");
					settextstyle(0,0,0);
					outtextxy(180,150,"ENTER USERNAME");
					rectangle(300,143,430,163);
					setfillstyle(1,0);
					floodfill(310,160,15);
					outtextxy(180,250,"ENTER PASSWORD");
					rectangle(300,245,430,265);
					floodfill(310,260,15);
					strcpy(st,accept1(305,148)); strcpy(obb.username,st);
					strcpy(x,accept2(305,250)); strcpy(obb.password,x);
					f.write( (char*) &obb,sizeof(obb)) ;
					int x1=225,y1=360;
					setcolor(GREEN) ;
					outtextxy(x1,y1,"ACCOUNT CREATED " ) ;
					delay(1000) ;


					f.close () ;


}
/*void act::check(char* st)
{
	ifstream f;
		f.open("user.dat",ios::in|ios::binary|ios::app);
	int flag=0 ;
	int x1=225,y1=360;
	       //	f.read((char*)&ob,sizeof(ob))         ;
		while(	f.read((char*)&obb,sizeof(obb))  )
		{
			if(strcmpi(st,obb.name_return())==0)
			{
				flag=1 ;
			}
		      //	f.read((char*)&ob,sizeof(ob));

		}
		if (flag==0)
		{
			setcolor(GREEN) ;
			outtextxy(x1,y1,"ACCOUNT CREATED " ) ;
			delay(1000) ;
		}
		else
		{
			setcolor(RED);
			outtextxy(x1,y1,"USERNAME ALREADY TAKEN");
			delay (1000) ;
			exit(0);

		}
		f.close();

} */

void create_user()
{

		clrscr () ;
		obb.create(st);
	       //	obb.check(st) ;
		getch();
		closegraph();

}




