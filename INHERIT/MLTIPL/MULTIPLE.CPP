			// This program show you the concept of multiple inheritance

#include<iostream.h>
#include<conio.h>
class A
{
	protected:
		int a;
	public:
		void geta();
		void puta();
};
class B
{
	protected:
		int b;
	public:
		void getb();
		void putb();
};
class C
{
	protected:
		int c;
	public:
		void mygetc();
		void myputc();
};
class D:public A,private B,protected C
{
	private:
		int tot;
	protected:
		int d;
	public:
		void caltot();
		void getd();
		void putd();
};
void A::geta()
{
	cout<<"\n Enter a =";
	cin>>a;
}
void B::getb()
{
	cout<<"\n Enter b =";
	cin>>b;
}
void C::mygetc()
{
	cout<<"\n Enter c =";
	cin>>c;
}
void D::getd()
{
	cout<<"\n Enter d =";
	cin>>d;
}
void A::puta()
{
	cout<<"\n a = "<<a;
}
void B::putb()
{
	cout<<"\n b = "<<b;
}
void C::myputc()
{
	cout<<"\n c = "<<c;
}
void D::putd()
{
	puta();    // Nesting optional
	putb();    // Nesting must
	myputc();  // Nesting must
	cout<<"\n d = "<<d;
	cout<<"\n Total = "<<tot;
}
void D::caltot()
{
	geta();  // Nesting must
	getb();  // Nesting must
	mygetc(); // Nesting must
	getd();     // Nesting optional
	tot=a+b+c+d;
}
void main()
{
	clrscr();
	D ob1;
    //  ob1.geta();   // we can also call here
    //	ob1.getd();   // we can also call here
	ob1.caltot();
    //  ob1.puta();   // we can also call here
	ob1.putd();
	getch();
}