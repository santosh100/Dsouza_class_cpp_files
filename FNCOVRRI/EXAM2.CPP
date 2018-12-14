// Example 2 of Function Overriding

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
	Abc oba;
	xyz obb;

	oba.show();	//Abc ka show
	oba.disp();     //Abc ka disp

	obb.show();     //xyz ka show
	obb.disp();	//xyz ka disp

	obb.Abc::show();    //Abc ka show
	obb.Abc::show();    //Abc ka disp
    getch();
}