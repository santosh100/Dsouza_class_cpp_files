		/* FRIEND FUNCTION

		1. Will always take an object reference as parameter.
		2. When defined class name or :: not required.
		3. When called it's direct. */

#include<iostream.h>
#include<conio.h>
class Girl;      // Girl class is declared here,it is necessary for compiler
class Boy
{
	int wallet;
    public:
	void getvalue()
	{
	    cout<<"\n Enter in wallet: ";
	    cin>>wallet;
	}
	void putvalue()
	{
	    cout<<"\n The value of wallet is: "<<wallet;
	}
    friend void swap(Boy&,Girl&);    // this all friend functions must be declared in both classes
    friend Boy add(Boy&,Girl&);
    friend Girl add(Girl&,Boy&);
    friend int greater(Girl&,Boy&);
};
class Girl
{
	int purse;
    public:
	void getvalue()
	{
	    cout<<"\n Entet in purse: ";
	    cin>>purse;
	}
	void putvalue()
	{
	    cout<<"\n The value of purse is: "<<purse;
	}
    friend void swap(Boy&,Girl&);
    friend Boy add(Boy&,Girl&);
    friend Girl add(Girl&,Boy&);
    friend int greater(Girl&,Boy&);
};
void swap(Boy&b,Girl&g)
{
	int t=b.wallet;
	b.wallet=g.purse;
	g.purse=t;
}
Boy add(Boy&b,Girl&g)   // Boy is return type
{
	Boy temp;
	temp.wallet=b.wallet+g.purse;
	return(temp);
}
Girl add(Girl&g,Boy&b)  //Girl is return type
{
	Girl temp;
	temp.purse=g.purse+b.wallet;
	return(temp);
}
int greater(Girl&g,Boy&b)
{
	return((g.purse>b.wallet)?g.purse:b.wallet);
}
void main()
{
	Boy b1,b2;
	Girl g1,g2;
	clrscr();
	b1.getvalue();
	g1.getvalue();
	b1.putvalue();
	g1.putvalue();
	swap(b1,g1);
	cout<<"\n\n After swapping: ";
	b1.putvalue();
	g1.putvalue();
	b2=add(b1,g1);
	g2=add(g1,b1);
   //	int t;                 // both is correct
	int t= greater(g1,b1);
	cout<<"\n\n After adding b1 and g1 to b2: ";
	b2.putvalue();
	cout<<"\n\n After adding g1 and b1 to g2: ";
	g2.putvalue();
	cout<<"\n\n Greater = "<<t;
	getch();
}