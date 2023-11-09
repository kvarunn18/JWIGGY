/*#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<fstream.h>*/
#define ob   rn
class resti
{
      public:	char	na[50];

		char	a[5][30];
		 void input();
		char* return_name()
		{
			return na;
		}
		void print();
		void create();
		void display();
}ob;
void resti::input()
{
	cout<<"\n enter restaurant and cuisines";
	gets(na);
	for(int i=0;i<5;i++)
	{
		gets(a[i]);
	}
	cout<<endl;
}
void resti::print()
{
	cout<<"inputted restaurants and cuisines :";
	cout<<na<<endl;
	for(int i=0;i<5;i++)

	{
		cout<<a[i];
		cout<<"\t";
	}
}
void resti::create()
{
		ofstream f;    char opt;
		f.open("rest.Dat",ios::app|ios::binary);
		do
		{
			ob.input();
			f.write((char*)&ob,sizeof(ob));
			cout<<"\n do you want to enter more? y/n";
			cin>>opt;
			opt=toupper(opt);
		}  while(opt=='Y')  ;
		f.close();
}
void resti::display()
{
	ifstream	f;
	       f.open("rest.Dat",ios::in|ios::binary);
			while(f.read((char*)&ob,sizeof(ob)))
			{
				ob.print();
				cout<<endl;
			}
			f.close();
}
void modify()
{
	char	d[50]; resti temp;
		cout<<"\nenter data to be modified";
		gets(d);
		ifstream f("rest.Dat",ios::in|ios::binary);
		while(f.read((char*)&ob,sizeof(ob)));
		{
			cout<<"\nenter details of new record";
			if(ob.return_name()==d)
			{
				temp.input();
				ob.input();
				cout<<"modified";
			}
		f.close();
		}


}
/*void main()
{
	clrscr();
  //	ob.create();
  ob.display();
	getch();
} */




