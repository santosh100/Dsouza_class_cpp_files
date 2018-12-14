#include<iostream.h>
#include<conio.h>
#include<dos.h>
class matrix
{
	int **a,r,c;
    public:
	matrix(int,int);
	void getdata(int,int);
	void putdata(int,int);
	void magic();
};
matrix::matrix(int i,int j)
{
	r=i;
	c=j;
	a=new int*[r];
	for(i=0;i<r;i++)
	    a[i]=new int[c];
}
/* void matrix::getdata(int x,int y)
{
	clrscr();
	cout<<"\n Enter matrix : ";
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(x=t,j=0;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		cin>>a[i][j];
	    }
	}
}        */
void matrix::magic()
{
	int i,j,k;
	for(i=0,j=r/2,k=1;k<=(r*r); )
	{
	    a[i][j]=k;
	      k++;
	    if((k-1)%r==0)
		i++;
	    else
		i--,j--;
	    if(i<0)
	       i=r-1;
	    if(j<0)
	       j=r-1;
	}
}
void matrix::putdata(int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(x=t,j=0;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		cout<<a[i][j];
		delay(100);
	    }
	}
}
void main()
{
	// matrix ob;	//error
	matrix ob7(3,3);
	clrscr();
	ob7.magic();
	cout<<"\n Magic matrix : ";
	ob7.putdata(40,3);
	getch();
}