		// Constructor can also be defined outside the class
		// Parameterized constructor

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
    public:
	Abc(int,int,int);   // Declaration of a parameterized constructor
	void putdata();
};
Abc::Abc(int i,int j,int k) // Defination of a parameterized constructor outside the class
{
	a=i;
	b=j;
	c=k;
}
void Abc::putdata()
{
	clrscr();
	cout<<"\n a = "<<a
	    <<"\n b = "<<b
	    <<"\n c = "<<c;
	    getch();
}
void main()
{
     //	Abc ob;   //error becouse it is defaut constuctor
	Abc ob1(10,20,30);     // Implicit called
	Abc ob2=Abc(5,10,15);  // Explicit called
	ob1.putdata();
	ob2.putdata();
}