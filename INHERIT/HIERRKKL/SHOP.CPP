/* 			     DATA ABSTRACTION

 Unnecessary reprication of common data member and functions we create a base
 class with all this common data members and functions and thereafter we
 inherite into all the derived classes which requires the same.Thereafter
 the concept of data abstraction is fulfilled.The base class can also be
 called as abstract class we do not have to create an object of it.  */

 // Example of Hierarchical inheritance also fulfill the concept of abstraction

#include<iostream.h>
#include<conio.h>
class Shop
{
    protected:
	int itemno;
	char desc[20];
	char type[20];
	char make[20];
	int price;
	int qty;
	int amt;
    public:
	void getshop();
	void putshop();
};
class TV:public Shop
{
    protected:
	char size[20];
    public:
	void gettv();
	void puttv();
};
class Mobile:public Shop
{
    protected:
	char os[20];
    public:
	void getmobile();
	void putmobile();
};
class AC: public Shop
{
    protected:
	char capacity[20];
    public:
	void getac();
	void putac();
};
void Shop::getshop()
{
	cout<<"\n Enter Item no,Description,Type,Brand,Price,Quantity: ";
	cin>>itemno>>desc>>type>>make>>price>>qty;
	amt=price*qty;
}
void Shop::putshop()
{
	cout<<"\n Item no : "<<itemno
	    <<"\n Description : "<<desc
	    <<"\n Type : "<<type
	    <<"\n Brand : "<<make
	    <<"\n Price : "<<price
	    <<"\n Quantity : "<<qty
	    <<"\n Amount : "<<amt
	    <<"\n ********************";
}
void TV::gettv()
{
	cout<<"\n Enter size of TV: ";
	cin>>size;
	getshop();
}
void AC::getac()
{
	cout<<"\n Enter capacity of AC: ";
	cin>>capacity;
	getshop();
}
void Mobile::getmobile()
{
	cout<<"\n Enter Operating System of mobile: ";
	cin>>os;
	getshop();
}
void TV::puttv()
{
	putshop();
	cout<<"\n The size of TV is: "<<size;
}
void AC::putac()
{
	putshop();
	cout<<"\n Capacity of AC is: "<<capacity;
}
void Mobile::putmobile()
{
	putshop();
	cout<<"\n Operating System of Mobile is: "<<os;
}
void main()
{
	TV ob1;
	ob1.gettv();
	ob1.puttv();

	AC ob2;
	ob2.getac();
	ob2.putac();

	Mobile ob3;
	ob3.getmobile();
	ob3.putmobile();
    getch();
}