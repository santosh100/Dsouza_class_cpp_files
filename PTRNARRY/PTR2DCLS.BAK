// Concepts of POINTER TO DERIVED CLASS/OBJECT

#include<iostream.h>
#include<conio.h>
class Abc
{
    public:
	int a;
    void disp()
    {
	cout<<"\n a = "<<a<<"\n Abc ka display";
    }
};
class xyz:public Abc
{
    public:
	int b;
    void show()
    {
	cout<<"\n b = "<<b<<"\n xyz ka show";
    }
};

void main()
{
    clrscr();
	Abc oba,*pa;
	xyz obb,*pb;

 /*	pa= &oba;
	pa->a=10;
	pa->disp();

	pb= &obb;          // NO PROBLEM
	pb->a=20;
	pb->disp();
	pb->b=40;
	pb->show();     */

	pa = & obb;   //Limits, pointer having refrence of another obj can
	pa->a = 50;   // access only it's own data members and functions
	pa->disp();

   //	pa->b=100;    //Error
   //	pa->show();   //Error
	((xyz*)pa)->b=100;  // Error handled (removed)
	((xyz*)pa)->show();
   getch();
}