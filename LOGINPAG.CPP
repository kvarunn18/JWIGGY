#include"accept_n.cpp"
class user
{
  public:	char username[50];
		char password[50];
		char address[100];
		 void input()
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
		void check(char*,char*) ;
		void customer(char*,char*) ;
}ob;
void user::check(char* st,char* x)
{
	ifstream f;
		f.open("user.dat",ios::in|ios::binary);
	int flag=0,galf=0;
		while(f.read((char*)&ob,sizeof(ob)))
		{
			if(strcmpi(st,ob.name_return())==0)
			    {	flag=1;
				if(strcmpi(x,ob.pass_return())==0) galf=2;
			    }
		}
	int x1=225,y1=360;
		setcolor(RED);
		if(flag==1)
		{
			setcolor(GREEN);
			outtextxy(x1,y1,"LOGIN SUCCESS");
		}
		else if(flag==0)
		{
			outtextxy(x1,y1,"WRONG PASSWORD");
		}

		f.close();
}
void user :: customer(char* st,char* x)
{
		fstream		f ;
				f.open("user.dat",ios::out|ios::binary|ios::app) ;
		int		driver=9,mode=2;
				initgraph(&driver,&mode,"C:\\Turboc3\\bgi");
				rectangle(160,80,450,340);
				settextstyle(7,0,2);
				setfillstyle(1,12);
				floodfill(190,90,15);
				outtextxy(260,90,"CUSTOMER");
				settextstyle(0,0,0);
				outtextxy(180,150,"ENTER USERNAME");
				rectangle(300,143,430,163);
				setfillstyle(1,0);
				floodfill(310,160,15);
				outtextxy(180,250,"ENTER PASSWORD");
				rectangle(300,245,430,265);
				floodfill(310,260,15);
				strcpy(st,accept1(305,148));
				strcpy(x,accept2(305,250));
				f.write( (char*) &ob ,sizeof(ob) );

}
void login_user()
{

		char	st[100],x[20];
		clrscr();
		ob.customer(st,x);
		ob.check(st,x);
		getch();
		closegraph();

}



