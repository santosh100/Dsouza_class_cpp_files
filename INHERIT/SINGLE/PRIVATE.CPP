  /*	A class can be inherited by 3 ways;

   1. Public
   2. Private
   3. Protected        */

// This program is example of single inheritance which is inherited as Private

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

class B:private A
{
	int b;
    public:
	void getb();
	void putb();
};
void B::getb()
{
	geta();	     // Bcz private function must be nested
	cout<<"\n Enter in b: ";
	cin>>b;

	cout<<"\n Enter in c: ";
	cin>>c;	     //Bcz c is privately inherited
}
void B::putb()
{
	puta();	     // Bcz  private function must be nested
	cout<<"\n b = "<<b;

	cout<<"\n c = "<<c;    // Bcz c is privately inherited
}

void main()
{
	clrscr();
	B ob;

   //	ob.geta();	//Error
	ob.getb();
    //	cout<<"\n Enter in ob.c :";
    //	cin>>ob.c;	//Error

    //	ob.puta();      //Error
	ob.putb();
    //	cout<<"\n ob.c = "<<ob.c;   //Error
	getch();
}