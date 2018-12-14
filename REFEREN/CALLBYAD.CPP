			// CALL BY ADDRESS
			// Actual values also change
			// Address of actual parameter and formal parameter is different

#include<iostream.h>
#include<conio.h>
void main()
{
	int a=5,b=10;
	void swap(int *,int*);   // Declaration of function
	clrscr();
	cout<<"\n Before swapping values in main() a = "<<a<<" b = "<<b;
	cout<<"\n In main() Address of a = "<<&a<<" Address of b = "<<&b;
	swap(&a,&b);
	cout<<"\n\n After swapping values in main() a = "<<a<<" b = "<<b;
	getch();
}
void swap(int *x,int *y)
{
	cout<<"\n\n Before swapping the value of x = "<<*x<<" y = "<<*y;
	cout<<"\n\n Address of x = "<<&x<<" Address of y = "<<&y;
	cout<<"\n\n Address of a = "<<x<<" Address of b = "<<y;
	int t = *x;
	*x=*y;
	*y=t;
	cout<<"\n\n After swapping the value of x = "<<*x<<" y = "<<*y;
}