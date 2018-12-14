// Example  of POINTER TO DERIVED CLASS/OBJECT with Function Overriding

#include<iostream.h>
#include<conio.h>
class Abc
{
    public:
	void show()
	{
	    cout<<"\n Abc ka show";
	}
	void disp()
	{
	    cout<<"\n Abc ka disp";
	}
};
class xyz:public Abc
{
    public:
	void show()
	{
	    cout<<"\n xyz ka show";
	}
	void disp()
	{
	    cout<<"\n xyz ka disp";
	}
};

void main()
{
    clrscr();
	Abc *p;
	xyz ob1;
	p=&ob1;     //limit, can access only it's own functions and members

	p->show();   // Abc ka show
	p->disp();   // Abc ka disp

	((xyz*)p)->show();   // xyz ka show
	((xyz*)p)->disp();   // xyz ka disp
    getch();
}