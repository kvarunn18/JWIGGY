
char * accept1(int x, int y)
{
				setcolor(CYAN);
				setfillstyle(1,BLACK);
		char	na[50]="\0", ch;
		int		i = 0;
				ch = getch();
				while ( ch != '\r')
				{
					na[i] = ch;
					if (na[i]!='\b') i++; else i--;
					na[i]='\0';
					bar (x,y,x+150,y+10);
					outtextxy(x,y,na);
					ch = getch();
				}
				return na;
}
char * accept2(int x, int y)
{
				setcolor(CYAN);
				setfillstyle(1,BLACK);
		char	na[50]="\0", ch;
		char	star[50]="\0";
		int		i = 0;
				ch = getch();
				while ( ch != '\r')
				{
					na[i] = ch;
					star[i]='*';
					if (na[i]!='\b') i++; else i--;
					na[i]='\0';
					star[i]='\0';
					bar (x,y,x+120,y+10);
					outtextxy(x,y,star);
					ch = getch();
				}
				return na;
}