#include<iostream.h>
#include<conio.h>
class bill
{
    private:
	int unit;
	char name[20];
	long int pay;
    public:
	void getdata()
	{
	    cout<<"\n Enter Name and Unit: ";
	    cin>>name>>unit;
	}
    inline void calbill();
    inline void putdata();
};
void bill::calbill()
{
	pay=0;
	if(unit<=33)
	    pay=100;
	else
	    if(unit<=300)
		pay=(long int)unit*3;
	    else
		if(unit<=500)
		    pay=(long int)unit*5;
		else
		    pay=(long int)unit*8;
}
void bill::putdata()
{
	cout<<"\n Name: "<<name
	    <<"\n Unit Used: "<<unit
	    <<"\n Payment: "<<pay
	    <<"\n ***********************";
}
void main()
{
	clrscr();
	bill x,y;
	x.getdata();
	x.calbill();
	x.putdata();
	y.getdata();
	y.calbill();
	y.putdata();
	getch();
}