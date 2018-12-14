#include<iostream.h>
#include<conio.h>
class customer
{
    private:
	int per,dis,pay;
	char name[20];
    public:
	void getdata()
	{
	    cout<<"\n Enter Name and Perchases: ";
	    cin>>name>>per;
	}
    inline void calpay();
    inline void putdata();
};
void customer::calpay()
{
	dis=0,pay=0;
	if(per<1000)
	    dis=0;
	else
	    if(per<=5000)
		dis=per*.1;
	    else
		if(per<=10000)
		    dis=per*.2;
		else
		    dis=per*.25;
	pay=per-dis;
}
void customer::putdata()
{
	cout<<"\n NAME : "<<name
	    <<"\n PERCHASES: "<<per
	    <<"\n DISCOUNT: "<<dis
	    <<"\n PAYMENT: "<<pay
	    <<"\n ********************";
}
void main()
{
	clrscr();
	customer x,y;
	x.getdata();
	x.calpay();
	x.putdata();
	y.getdata();
	y.calpay();
	y.putdata();
	getch();
}