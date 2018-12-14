// use of virtual keyword
// A DAY_TODAY Example of Hybrid Inheritance

#include<iostream.h>
#include<conio.h>
class GP
{
    protected:
	int car;
    public:
	void getcar();
	void putcar();
};
class PAPA:virtual public GP
{
    protected:
	int bus;
    public:
	void getbus();
	void putbus();
};
class UNCLE:public virtual GP
{
    protected:
	int truck;
    public:
	void gettruck();
	void puttruck();
};
class ME:public PAPA,public UNCLE
{
    int tot;
    protected:
	int train;
    public:
	void gettrain();
	void puttrain();
	void caltot();
};
void GP::getcar()
{
	cout<<"\n Enter no of cars: ";
	cin>>car;
}
void PAPA::getbus()
{
	cout<<"\n Enter no of buses: ";
	cin>>bus;
}
void UNCLE::gettruck()
{
	cout<<"\n Enter no of trucks: ";
	cin>>truck;
}
void ME::gettrain()
{
	cout<<"\n Enter no of trains: ";
	cin>>train;
}
void GP::putcar()
{
	cout<<"\n No of cars: "<<car;
}
void PAPA::putbus()
{
	cout<<"\n No of buses: "<<bus;
}
void UNCLE::puttruck()
{
	cout<<"\n No of trucks: "<<truck;
}
void ME::puttrain()
{
	cout<<"\n No of trains: "<<train;
}
void ME::caltot()
{
	getcar();
	getbus();
	gettruck();
	gettrain();

	tot=car+bus+truck+train;

	putcar();
	putbus();
	puttruck();
	puttrain();
	cout<<"\n\n TOTAL = "<<tot;
	getch();
}
void main()
{
	clrscr();
     //	ME ob.caltot();       // Declaration syntax error
	ME ob;
	ob.caltot();
}
