#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include"restnew.cpp"
#include"food.cpp"
char b[30];
void main()
{
	clrscr();
	cout<<"\nenter the restaurant name";
	gets(b);
	ifstream f("food.Dat",ios::in|ios::binary);
	ifstream g("rest.Dat",ios::in|ios::binary);
	while(g.read((char*)&ob,sizeof(ob)))
	{
		if(strcmpi(b,ob.return_name())==0)
		{
			while(f.read((char*)&ob1,sizeof(ob1)))
			{
				for(int i=0;i<5;i++)
				{
				if(strcmpi(ob.a[i],ob1.cname)==0)
				cout<<endl<<ob1.return_foodname()<<endl;
				}
			}
		}
	}
	f.close();
	g.close();
	getch();
}

