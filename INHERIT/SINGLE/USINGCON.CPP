// Single Inheritance using Constructor

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b;
    public:
	Abc(int i,int j)
	{
	    a=i;
	    b=j;
	}
	void putabc();
};
class xyz:public Abc
{
	int x,y;
    public:
	xyz(int i,int j,int k,int l):Abc(i,j)
	{
	    x=k;
	    y=l;
	}
	xyz(int i,int j):Abc(i+j,i*j)
	{
	    x=i;
	    y=j;
	}
	void putxyz();
};
void Abc::putabc()
{
	cout<<"\n a = "<<a
	    <<"\n b = "<<b;
}
void xyz::putxyz()
{
	cout<<"\n x = "<<x
	    <<"\n y = "<<y;
}
void main()
{
	clrscr();
  //	xyz ob1;	//Error

	xyz ob1(10,20,30,40);
	xyz ob2(10,20);
	ob1.putabc();
	ob1.putxyz();
	ob2.putabc();
	ob2.putxyz();
    getch();
}