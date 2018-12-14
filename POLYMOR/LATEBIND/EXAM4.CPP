// Runtime Polymorphism
// pure virtual function

#include<iostream.h>
#include<conio.h>
class Bank
{
    public:
	virtual void drink()
	{
	    cout<<"\n Cool Water";
	}

	virtual void introducer()=0;
	virtual void kycknows()=0;
};
class Saving:public Bank
{
    public:
	void introducer()
	{
	    cout<<"\n Hello, I want to open Saving account";
	}
	void kycknows()
	{
	    cout<<"\n Myself Santosh Sahu residence of Bilaspur";
	}
};
class Current:public Bank
{
    public:
	void introducer()
	{
	    cout<<"\n Hello, I want ot open Current account";
	}
	void kycknows()
	{
	    cout<<"\n Myself Vaibhav Tiwari residence of Bilaspur";
	}
};

void main()
{
  clrscr();
	Bank *p;
	Saving ob1;
	Current ob2;

	p=&ob1;
	p->introducer();
	p->kycknows();

	p=&ob2;
	p->introducer();
	p->kycknows();
  getch();
}