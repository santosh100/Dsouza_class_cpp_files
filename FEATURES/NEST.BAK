			// Nesting is optional
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
	    <<"\n c = "<<c
	    <<"\n sum = "<<sum();  // Nesting of function
	    getch();
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
   //	cout<<"\n sum of ob1 = "<<ob1.sum();   // It is not an error will work also
   //	getch();
	ob2.getdata(6,7,8);
	ob2.putdata();
  //    int d =ob2.sum();		     // It is not an error will work work also
  //	cout<<"\n sum of ob2 = "<<d;
  //	getch();
}