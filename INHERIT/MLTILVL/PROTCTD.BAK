//Day to Day example of a multilevel inheritance inherited public
//Protected data can be inherited with security

#include<iostream.h>
#include<conio.h>
class GP
{
    protected:
	int field;
    public:
	void getfield();
	void putfield();
};
class PAPA :public GP
{
    protected:
	int house;
    public:
	void gethouse();
	void puthouse();
};
class ME: public PAPA
{
	int tot;
    protected:
	int car;
    public:
	void getcar();
	void putcar();
	void caltot()
	{
	     tot=field+house+car;
	     cout<<"\n total = "<<tot;
	}
};
void GP::getfield()
{
	cout<<"\n Enter no of fields: ";
	cin>>field;
}
void PAPA::gethouse()
{
	cout<<"\n Enter no of house: ";
	cin>>house;
}
void ME::getcar()
{
	getfield();
	gethouse();
	cout<<"\n Enter no of car: ";
	cin>>car;
}
void GP::putfield()
{
	cout<<"\n No of Fields = "<<field;
}
void PAPA::puthouse()
{
	cout<<"\n No of Houses = "<<house;
}
void ME::putcar()
{
	putfield();
	puthouse();
	cout<<"\n No of cars = "<<car;
}
void main()
{
	clrscr();
	ME ob;
	ob.getcar();
	ob.putcar();
	ob.caltot();
	getch();
}