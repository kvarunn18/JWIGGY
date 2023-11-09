/*#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<ctype.h>
#include<fstream.h>*/
class food
{
	public:	char name[40];
		char cname[40];
		int cost,qty;
		char type;
					void input();
					 void print();
					 food()
					 {
						qty=0;
					 }
			 void create();
					char* return_foodname()
				{
					return name;
				}
			   /*	char* return_cuisine()
				{
					return cname;
				}     */
					 void display();
}ob1;
void food::input()
{
	cout<<"\n\nEnter the food item\n\n"<<endl; gets(name);

			cout<<"\n\nEnter the cuisine name\n\n"<<endl; gets(cname);

			cout<<"\n\nEnter the cost"; cin>>cost;
			cout<<endl;
			cout<<"\nEnter the type";cin>>type;
			return ;
}

void food::create()
{
	char opt; int i=1;
	ofstream f("food.Dat",ios::app|ios::binary);

		do
		{
			cout<<"\n Enter data of the record";
			ob1.input();
			f.write((char*)&ob1 , sizeof(ob1)); i++;
		}while(i<=5);
		f.close();
}
void food::print()
{
	cout<<name<<"\t"<<cname<<"\t"<<cost<<"\t"<<type<<"\t"<<qty<<endl;
	return;
}
void food::display()
{
	   ifstream    f("food.Dat",ios::in|ios::binary);

				while(f.read((char*)&ob1,sizeof(ob1)))
				{
					ob1.print();
					cout<<endl;
				}
				f.close();
}
/*void main()
{
	clrscr();
     // ob1.create();
   ob1.display();
	getch();
} */




