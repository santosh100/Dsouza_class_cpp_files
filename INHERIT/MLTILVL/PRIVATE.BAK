//Day to Day example of a multilevel inheritance inheriting public
//this program will not work see next "protcted.cpp" bcz private data can never be inherited

#include<iostream.h>
#include<conio.h>
class GP
{
	int field;
    public:
	void gerfield();
	void putfield();
};
class PAPA :public GP
{
	int house;
    public:
	void gethouse();
	void puthouse();
};
class ME: public PAPA
{
	int tot;
	int car;
    public:
	void getcar();
	void putcar();
	void caltot()
	{
	     tot=field+house+car;     //Error bcz private data can never be inherited
	     cout<<"\n total = "<<tot;
	}
};
void main()
{
	ME ob; // this program will not work see next "protcted.cpp"
}