		/* FRIEND FUNCTION

		1. Will always take an object reference as parameter.
		2. When defined class name or :: not required.
		3. When called it's direct. */

		// Example for one class

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
    public:
	void getdata(int i,int j,int k)
	{
	    a=i;
	    b=j;
	    c=k;
	}
	void putdata();
	friend int sum(Abc&);
};
void Abc::putdata()
{
	clrscr();
	cout<<"\n a: "<<a
	    <<"\n b: "<<b
	    <<"\n c: "<<c;
}
int sum(Abc&k)
{
	return(k.a+k.b+k.c);
}
void main()
{
	Abc ob1;
	ob1.getdata(10,20,30);
	ob1.putdata();
	cout<<"\n Sum of ob: "<<sum(ob1);
}