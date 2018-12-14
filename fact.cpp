#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n=5,s=1;
	for( ;n>1;n--)
	    s*=n;
	cout<<"\n factorial = "<<s;
	getch();
}