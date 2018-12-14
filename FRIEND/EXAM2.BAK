		/* FRIEND FUNCTION

		1. Will always take an object reference as parameter.
		2. When defined class name or :: not required.
		3. When called it's direct. */
			// ACTUAL USE OF FRIEND FUNCTION
			// EXAMPLE FOR MORE THAN ONE CLASS

#include<iostream.h>
#include<conio.h>
class Girl;       // It is must to declare here
class Boy
{
	int wallet;
    public:
	void getvalue()
	{
		clrscr();
		cout<<"\n Enter in wallet: ";
		cin>>wallet;
	}
	void putvalue()
	{
		cout<<"\n The value of wallet is: "<<wallet;
	}
    friend void swap(Boy&,Girl&);    // In both class i've to declare
};
class Girl
{
	int purse;
    public:
	void getvalue()
	{
		cout<<"\n Enter in purse: ";
		cin>>purse;
	}
	void putvalue()
	{
		cout<<"\n The value of purse: "<<purse;
	}
    friend void swap(Boy&,Girl&);    // In both class i've to declare
};
void swap(Boy&b,Girl&g)
{
	int t=b.wallet;
	b.wallet=g.purse;
	g.purse=t;
}
void main()
{
	Boy b1;
	Girl g1;
	b1.getvalue();
	g1.getvalue();
	b1.putvalue();
	g1.putvalue();
	swap(b1,g1);      // While calling friend function,its direct
	cout<<"\n\n After swapping ";
	b1.putvalue();
	g1.putvalue();
	getch();
}