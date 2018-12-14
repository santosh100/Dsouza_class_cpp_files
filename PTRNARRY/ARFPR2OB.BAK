// Concept of "ARRY OF POINTER TO OBJECT"

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b;
    public:
	void getdata();
	void putdata();
};
void Abc::getdata()
{
	cout<<"\n Enter two nos: ";
	cin>>a>>b;
}
void Abc::putdata()
{
	cout<<"\n a = "<<a<<"\n b = "<<b;
}

void main()
{
    clrscr();
	Abc *p[100];
	int i=0,j=0;
	char ans;

	do
	{
	    p[i]=new Abc;
	    p[i]->getdata();
	    i++;
	    cout<<"\n Want to continue y/n: ";
	    cin>>ans;
	}while(i<100 && ans=='y');

	while(j<i)
	{
	    p[j]->putdata();
	    j++;
	}
	getch();
}