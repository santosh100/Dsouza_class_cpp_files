// Example1 of a function overriding

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b;
    public:
	void getdata();
	void putdata();
};
class xyz:public Abc
{
	int x,y;
    public:
	void getdata();
	void putdata();
};
void Abc::getdata()
{
	cout<<"\n Enter a and b :";
	cin>>a>>b;
}
void Abc::putdata()
{
	cout<<"\n a = "<<a<<"\n b = "<<b;
}
void xyz::getdata()
{
	cout<<"\n Enter x and y :";
	cin>>x>>y;
}
void xyz::putdata()
{
	cout<<"\n x = "<<x<<"\n y = "<<y;
}
void main()
{
    clrscr();
	xyz ob;
	ob.getdata();     // will get data into x and y
	ob.putdata();     // will put data of x and y
	ob.Abc::getdata(); // will get data into a and b
	ob.Abc::putdata(); // will put data of a and b
    getch();
}