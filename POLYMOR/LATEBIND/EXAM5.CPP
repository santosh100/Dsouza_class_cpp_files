// Runtime Polymorphism Using Constructor

#include <iostream.h>
#include<conio.h>
#include<string.h>
class Media
{
    protected:
	char title[20];
	int price;
    public:
	Media(char *t,int p)
	{
	  strcpy(title,t);
	  price=p;
	}

	virtual void display()
	{
	}
};
class Book:public Media
{
	int pages;
    public:
	Book(char *t,int pr,int p):Media(t,pr)
	{
	  pages=p;
	}
	void display()
	{
	    cout<<"\n Title: "<<title
		<<"\n Price: "<<price
		<<"\n Pages: "<<pages;
	}
};
class Movies:public Media
{
	int time;
    public:
	Movies(char *t,int p,int ti):Media(t,p)
	{
	  time=ti;
	}
	void display()
	{
	    cout<<"\n Title: "<<title
		<<"\n Price: "<<price
		<<"\n Time: "<<time;
	}
};

void main()
{
  clrscr();
	//Book ob1;
	//Movies m1;

	Media *p;
	Book b1("CPP",500,250);
	Movies m1("Sholay",20,3);

	p=&b1;
	p->display();
	p=&m1;
	p->display();
  getch();
}