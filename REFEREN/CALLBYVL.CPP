			// CALL BY VALLUE
			// No changes in actual values

#include<iostream.h>
#include<conio.h>
void main()
{
	int a=5,b=10;
	void swap(int,int);  // Declaration of function
	clrscr();
	cout<<"\n Before swapping values in main() a = "<<a<<" b = "<<b;
	swap(a,b);
	cout<<"\n\n After swapping values in main() a = "<<a<<" b = "<<b;
	getch();
}
void swap(int x,int y)
{
	cout<<"\n\n Before swapping the value of x = "<<x<<" y = "<<y;
	int t = x;
	x=y;
	y=t;
	cout<<"\n\n After swapping the value of x = "<<x<<" y = "<<y;
}