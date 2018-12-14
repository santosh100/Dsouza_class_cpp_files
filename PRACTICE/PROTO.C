#include<stdio.h>
add1(int k,int l)
{
	printf("\n k = %d",k);
	printf("\n l = %d",l);
	return 0;
}
void main()
{
	int t;
	clrscr();
	t=add(10,20);
	printf("\n sum = %d",t);
	add1(20,10);
	getch();

}
add(int m,int n)
{
	printf("\n hello how are you: ");
	getch();
	return(m+n);
}