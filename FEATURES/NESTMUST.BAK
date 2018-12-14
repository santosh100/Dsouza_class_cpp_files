		     /*	 :-PRIVATE FUNCTION-:

			=> If the function is private nesting becomes must */

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
	int sum();      // Becouse of this nesting became must
    public:
	void getdata(int i,int j,int k)
	{
	    a=i,b=j,c=k;
	}
    inline void putdata();
};
void Abc::putdata()
{
	clrscr();
	cout<<"\n a = "<<a
	    <<"\n b = "<<b
	    <<"\n c = "<<c
	    <<"\n sum = "<<sum(); // Nesting of function
	getch();
}
int Abc::sum()
{
	return(a+b+c);
}
void main()
{
	Abc ob1,ob2;
	ob1.getdata(10,20,30);
	ob1.putdata();
    //	cout<<"\n sum of ob1 = "<<ob1.sum();   // Error "not accessible"
	ob2.getdata(6,7,8);
	ob2.putdata();
    //  int d =ob1.sum();                      // Error "not accessible"
    // 	cout<<"\n sum of ob2 = "<<d;
}