/* The concept of reusability of a class is called Inheritance
   There are 5 types of inheritance:

   1. Single (One Base class Inherited by on derived class)
   2. Multilevel (One Base class is inherited by onother and then that by another)
   3. Hierarchical (One Base class is inherited by multiple derived classes)
   4. Multiple (Multiple Base classes are inherited by on derived class)
   5. Hybrid (The combination of Multiplevel,Hierarchical and Multiple)

   A class can be inherited by 3 ways;

   1. Public
   2. Private
   3. Protected 	*/

// This program is example of single inheritance which is inherited as Public

#include<iostream.h>
#include<conio.h>
class A
{
	int a;
    public:
	void geta()
	{
	    cout<<"\n Enter in a : ";
	    cin>>a;
	}
	void puta()
	{
	    cout<<"\n a = "<<a;
	}
	int c;
};

class B:public A
{
	int b;
    public:
	void getb();
	void putb();
};
void B::getb()
{
	cout<<"\n Enter in b: ";
	cin>>b;
}
void B::putb()
{
	cout<<"\n b = "<<b;
}

void main()
{
	clrscr();
	B ob;

	ob.geta();
	ob.getb();
	cout<<"\n Enter in ob.c :";
	cin>>ob.c;

	ob.puta();
	ob.putb();
	cout<<"\n ob.c = "<<ob.c;
	getch();
}