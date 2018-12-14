// Example of type conversion (3.ONE CLASS TO ANOTHER CLASS)

#include<iostream.h>
#include<conio.h>
class Abc
{
	int itmno;
	int price;
	int qty;
    public:
	Abc(int i,int p,int q)
	{
	    itmno=i;
	    price=p;
	    qty=q;
	}
	void putabc();

	int retitmno()
	{
	    return(itmno);
	}
	int retprice()
	{
	    return(price);
	}
	int retqty()
	{
	    return(qty);
	}
};

class xyz
{
	int itemno;
	int amt;
    public:
	xyz(int i,int a)
	{
	    itemno=i;
	    amt=a;
	}
	xyz(Abc&);	//constructor
	void putxyz();
};
xyz::xyz(Abc&k)
{
    //  itemno=k.itemno;    //Error bcz we can't access private datamember
    //  amt=k.price*k.qty;    // of another class

	itemno=k.retitmno();
	amt=k.retprice()*k.retqty();
}
void Abc::putabc()
{
	cout<<"\n Item no = "<<itmno
	    <<"\n Price = "<<price
	    <<"\n Quantity = "<<qty;
}
void xyz::putxyz()
{
	cout<<"\n\n Item no = "<<itemno
	    <<"\n Amount = "<<amt;
}
void main()
{
	clrscr();
	Abc ob1(10,5,50);
	xyz ob2(ob1);      //One class to another class

	ob1.putabc();
	ob2.putxyz();
	getch();
}