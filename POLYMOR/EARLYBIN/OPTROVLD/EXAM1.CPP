/*	     	OPERATOR OVERLOADING

	Binary				Unary
	+				  -
	-				  ++
	/				  --
	*
			 */
#include<iostream.h>
#include<conio.h>
void main()
{
// example of binary operator overloading

	clrscr();
	int a=5,b=10,c=50,d=20,e=50,f=0;
	f=a+b+c+d+e;
	cout<<" f= "<<f;

// Example of unary operator overloading
	cout<<"\n\n";

	int k=5;
	 k= -k;
	cout<<k;
	 k= -k;
	cout<<" "<<k;

	getch();
}
