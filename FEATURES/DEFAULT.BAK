		   /* FUNCTION HAVING DEFAULT ARGUMENTS:-

		      1. Is only used when not supplied
		      2. Is given from Right to Left */ // example:- A customer taking loan in a bank

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double si(double p=100000,int t=25,float r=15.5);   //here if we will directly give to p then it will show error default value missing
     /*	double si(double p=100000,int t=25,float r);     // Error
	double si(double p=100000,int t,float r=15.5);   // Error
	double si(double p=100000,int t,float r);        // Error
	double si(double p,int t=25,float r=15.5);       // No Error if principle is sent
	double si(double p,int t,float r=15.5);          // No Error if principle and time are sent */
	cout<<"\n"<<si(1000000,12,10.5);
	cout<<"\n"<<si(2000000,20);
	cout<<"\n"<<si(2200000);
	cout<<"\n"<<si();
	getch();
}
double si(double p,int t,float r)
{
	return(p*t*r/100);
}