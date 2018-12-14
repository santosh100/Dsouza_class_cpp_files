// Multiple Inheritance Using Constructor

#include<iostream.h>
#include<conio.h>
class A
{
	int a;
    public:
	A(int i)
	{
	    a=i;
	}
	void puta()
	{
	    cout<<"\n a = "<<a;
	}
};
class B
{
	int b;
    public:
	B(int i)
	{
	    b=i;
	}
	void putb()
	{
	     cout<<"\n b = "<<b;
	}
};
class C
{
	int c;
    public:
	C(int i)
	{
	    c=i;
	}
	void myputc()
	{
	    cout<<"\n c = "<<c;
	}
};
class D:public B,public A,public C
{
	int d;
    public:
	D(int i,int j,int k,int l):A(i),B(j),C(k)
	{
	     d=l;
	}
	void putd()
	{
	    puta();
	    putb();
	    myputc();
	    cout<<"\n d = "<<d;
	}
};
void main()
{
    clrscr();
	D ob1(10,20,30,40);
	ob1.putd();
    getch();
}