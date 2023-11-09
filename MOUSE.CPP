class mouse2
{
		REGS regs;
		int no_buttons;
	public: int cx,cy,q;
		void get_status();
		int get_status_2(int&,int&);
		mouse2()
		{
			regs.x.ax=0;
			int86(0x33,&regs,&regs);
			if(regs.x.ax==0xfff)no_buttons=regs.x.bx;
		}
		void initializing_mouse()
		{
			regs.x.ax=0;
			regs.x.bx=0;
			int86(0x33,&regs,&regs);
			if(regs.x.ax==0xfff)no_buttons=regs.x.bx;
		}
		void show_mouse()
		{
			regs.x.ax=0x01;
			int86(0x33,&regs,&regs);
		}
		void hide_mouse()
		{
			regs.x.ax=0x02;
			regs.x.bx=0;
			int86(0x33,&regs,&regs);
			regs.x.bx=0;
		}
};
void mouse2::get_status()
{
	regs.x.ax=0x03;
	int86(0x33,&regs,&regs);
	while(q!=1)
	{
		regs.x.ax=0x03;
		int86(0x33,&regs,&regs);
		q=regs.x.bx;
		cx=regs.x.cx;
		cy=regs.x.dx;
	}
	q=0;
}
int mouse2::get_status_2(int& _1,int& _2)
{
	int	key2=0;
		regs.x.ax=0x03;
		int86(0x33,&regs,&regs);
		while(q!=1)
		{
			if(bioskey(1))
			{
				key2=bioskey(0);
				return key2;
			}
			regs.x.ax=0x03;
			int86(0x33,&regs,&regs);
			q=regs.x.bx;
			cx=regs.x.cx;
			cy=regs.x.dx;
			_1=cx;
			_2=cy;
		}
		q=0;
		return 0;
}
