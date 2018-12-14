// THIS PROGRAM SHOWS HOW TO REPLACE THE ARRAY WAY ( DYNAMIC CONSTRUCTOR MEANS DYNAMIC ALLOCATION )
// REPLACING 2D ARRAY

#include<iostream.h>
#include<conio.h>
/* class matrix
{
	int a[3][4];
    public:
	void getdata();
	void putdata();
};
void main()
{
	matrix ob1,ob2;
} */
class matrix
{
	int **a,r,c;
    public:
	matrix(int,int);
	void getdata(int,int);
	void putdata(int,int);
	void transpose(matrix&);
};
matrix::matrix(int i,int j)
{
	r=i;
	c=j;
	a=new int*[r];
	for(i=0;i<r;i++)
	    a[i]=new int[c];
}
void matrix::getdata(int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(x=t,j=0;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		cin>>a[i][j];
	    }
	}
}
void matrix::transpose(matrix&k)
{
	int i,j;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		k.a[j][i]=a[i][j];
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
	    }
	}
}
void main()
{
	// matrix ob;	//error
	matrix ob1(3,4),ob2(4,3);
	clrscr();
	ob1.getdata(5,3);
	ob1.transpose(ob2);
	ob2.putdata(40,3);
}