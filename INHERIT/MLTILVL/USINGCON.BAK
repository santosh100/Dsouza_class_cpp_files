// Multilevel Inheritance Using Constructor

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
class tyy:public xyz
{
	int t;
    public:
	tyy(int i,int j,int k,int l,int m):xyz(i,j,k,l)
	{
	    t=m;
	}
	tyy(int i,int j,int k):xyz(i,j)
	{
	    t=k;
	}
	void puttyy()
	{
	    putabc();
	    putxyz();
	    cout<<"\n t = "<<t;
	}
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
	tyy ob1(10,20,30,40,50);
	tyy ob2(10,20,100);
	ob1.puttyy();
	ob2.puttyy();
    getch();
}