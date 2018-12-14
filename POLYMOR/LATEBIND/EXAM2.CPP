// Runtime Polymorphism
// Concept of virtual function

#include<iostream.h>
#include<conio.h>
class Papa
{
    public:
	virtual void car()
	{
	}
};
class Me:public Papa
{
    public:
	void car()
	{
	    cout<<"\n Drive Maruti";
	}
	void motorcycle()
	{
	    cout<<"\n Drive Unicon";
	}
};
class Bro:public Papa
{
    public:
	void car()
	{
	    cout<<"\n Drive BMW";
	}
	void scooty()
	{
	    cout<<"\n Drive Activa";
	}
};

void main()
{
    clrscr();
	Papa *p;      //Papa's driver means p

	Me ob1;
	Bro ob2;

	p = &ob1;
	p->car();
   //	p->motorcycle();  // Error

	p = &ob2;
	p->car();
   //     p->scooty();      // Error
   getch();
}