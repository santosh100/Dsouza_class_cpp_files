// Runtime Polymorphism (LateBinding)
// Use of virtual keyword in poly morphism makes Runtime Polymorphism
// Concept of virtual function

#include<iostream.h>
#include<conio.h>
class Abc
{
    public:
 virtual void show()
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
	p=&ob1;

	p->show();   // xyz ka show
	p->disp();   // Abc ka disp

    getch();
}