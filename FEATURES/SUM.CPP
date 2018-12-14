		// DIFFERENT TYPE OF FUNCTION
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
    inline void putdata();
    inline int sum();
};
void Abc::putdata()
{
	clrscr();
	cout<<"\n a = "<<a
	    <<"\n b = "<<b
	    <<"\n c = "<<c;
}
int Abc::sum()
{
	return(a+b+c);
}
void main()
{
	clrscr();
	Abc ob1,ob2;
	ob1.getdata(10,20,30);
	ob1.putdata();
	cout<<"\n\n sum of ob1 = "<<ob1.sum();
	getch();
	ob2.getdata(6,7,8);
	ob2.putdata();
	int d=ob2.sum();
	cout<<"\n\n sum of ob2 = "<<d;
	getch();
}