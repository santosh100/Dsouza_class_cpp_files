			// same name variable under different scope
			// only possible in cpp

#include<iostream.h>
#include<conio.h>
int x=5;
void main()
{
	clrscr();
	int x=10;
	{
	    int x=2;
	    int y=x;
	    cout<<"\n x = "<<x
		<<"\n y = "<<y
		<<"\n ::x = "<<::x;
	}
	cout<<"\n x = "<<x;
   //  	cout<<"\n y = "<<y;       // Error undefined symbol
	cout<<"\n ::x = "<<::x;
	getch();
}