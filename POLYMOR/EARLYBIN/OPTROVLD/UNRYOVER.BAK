//	Example of Unary Operator Overloading

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
    public:
	Abc(int i,int j,int k)
	{
	    a=i;
	    b=j;
	    c=k;
	}
	void putdata();

	void operator-();
	void operator++();
	void operator--();
};
void Abc::operator-()
{
	a=-a;
	b=-b;
	c=-c;
}
void Abc::operator++()
{
	a=++a;
	b=++b;
	c=++c;
}
void Abc::operator--()
{
	a=--a;
	b=--b;
	c=--c;
}
void Abc::putdata()
{
	cout<<"\n a = "<<a
	    <<"\n b = "<<b
	    <<"\n c = "<<c;
}
void main()
{
	// Abc ob1;	//Error
	clrscr();
	Abc ob1(10,-20,30);
	ob1.putdata();

	   -ob1;
	ob1.putdata();

	   -ob1;
	ob1.putdata();

	    ob1++;
	ob1.putdata();

	    ob1--;
	ob1.putdata();
   getch();
}