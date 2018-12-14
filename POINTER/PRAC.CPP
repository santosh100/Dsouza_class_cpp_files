#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
    public:
	Abc(int i,int j,int k)
	{
       //	    this->a=i;
	 //   this->b=j;
	  //  this->c=k;
	  a=i;
	  b=j;
	  c=k;
	}
	Abc()
	{
	}
	Abc greater(Abc);
	void putdata();
};
void Abc::putdata()
{
	cout<<"\n a = "<<a
	    <<"\n b = "<<b
	    <<"\n c = "<<c;
	    getch();
}
Abc Abc::greater(Abc k)
{
	if(a>k.a)
	   return(*this);
	else
	   return(k);
}
void main()
{
	clrscr();
	Abc ob1(10,20,30);
	Abc ob2(80,90,100);
	Abc ob3;
	ob3=ob1.greater(ob2);
	cout<<"\n ob1 = ";
	ob1.putdata();
	cout<<"\n ob2 = ";
	ob2.putdata();
	cout<<"\n ob3 = ";
	ob3.putdata();
}