			/*  CONSTRUCTOR

1.Is used to allocate space in the memory for an object if required it's also
  used to initialize the data members.
2.Whenever an object is created it's must that a constructor is called.
3.The name of the class and the name of the constructor will be same.
4.Are not function hence they donot have any return type not even void.
5.Can implicitly as explicitly called.
6.Shoud be in public are of the class.
7.Can be overloaded.
8.Can have default arguments.
9.Can't be inherited.
10.Can be dynamic.
11.Are of three types 1.Default 2.Parameterized 3.Copy */


#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
    public:
	Abc(int i,int j,int k)   // Declaration & defination of a parameterized constructor
	{
	    a=i;
	    b=j;
	    c=k;
	}
	void putdata();      // Declaration of a function
};
void Abc::putdata()          // Defination of a function
{
	clrscr();
	cout<<"\n a = "<<a
	    <<"\n b = "<<b
	    <<"\n c = "<<c;
	    getch();
}
void main()
{
    //	Abc ob;   //error  becouse it's an default constructor
	Abc ob1(10,20,30);     // Implicit called
	Abc ob2=Abc(5,10,15);  // Explicit called
	ob1.putdata();
	ob2.putdata();
}