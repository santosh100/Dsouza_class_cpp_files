// THIS PROGRAM SHOWS HOW TO REPLACE THE ARRAY WAY ( DYNAMIC CONSTRUCTOR MEANS DYNAMIC ALLOCATION )
// REPLACING 2D ARRAY

#include<iostream.h>
#include<conio.h>
#include<dos.h>
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
	void getdata2(int,int); // only for ob6
	void putdata(int,int);
	void transpose(matrix&);
	void add(matrix&,matrix&);
	void mul(matrix&,matrix&);
	void fdbd();
	void utlt1();
	void utlt2();
	void rowsort();
	void colsort();
	void rctot();
	void magic();
};
matrix::matrix(int i,int j)	// Defining a constructor
{
	r=i;
	c=j;
	a=new int*[r];
	for(i=0;i<r;i++)
	    a[i]=new int[c];
}
//******************************* getdata() ********************************

void matrix::getdata(int x,int y)
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
}
// ********************************* getdata2() ****************************

void matrix::getdata2(int x,int y)
{
	clrscr();
	cout<<"\n Enter matrix : ";
	int i,j,t=x;
	for(i=0;i<r-1;i++,y+=2)
	{
	    for(x=t,j=0;j<c-1;j++,x+=5)
	    {
		gotoxy(x,y);
		cin>>a[i][j];
	    }
	}
}
// ******************************* transpose() ****************************

void matrix::transpose(matrix&k)
{
	int i,j;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		k.a[j][i]=a[i][j];
	}
    //	putdata(40,3);
}
// ****************************** add() ***********************************

void matrix::add(matrix&k1,matrix&k2)
{
	int i,j;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		a[i][j]=k1.a[i][j]+k2.a[i][j];
	}
	putdata(40,3);
}
// *********************************** mul() ******************************

void matrix::mul(matrix&k1,matrix&k2)
{
	int i,j,k;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
		a[i][j]=0;
		for(k=0;k<c;k++)
		    a[i][j]+=k1.a[i][k]*k2.a[k][j];
	    }
	}
	putdata(40,3);
}
//******************************* fdbd() ***********************************
void matrix::fdbd()
{
	int i,j,fd=0,bd=0;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
		if(i==j)
		  fd+=a[i][j];
		if((i+j)==(r-1))
		  bd+=a[i][j];
	    }
	}
	cout<<"\n Front Diagonal = "<<fd
	    <<"\n Back Diagonal = "<<bd;
	getch();
}
//******************************* utlt1() *********************************
void matrix::utlt1()
{
	int i,j,ut=0,lt=0;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
		if(i>=j)
		  lt+=a[i][j];
		if(i<=j)
		  ut+=a[i][j];
	    }
	}
	cout<<"\n Total of Upper Triangle = "<<ut
	    <<"\n Total of Lower Triangle = "<<lt;
	getch();
}
// ****************************** utlt2() **********************************
void matrix::utlt2()
{
	int i,j,ut=0,lt=0;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
		if((i+j)<=(r-1))
		    ut+=a[i][j];
		if((i+j)>=(r-1))
		    lt+=a[i][j];
	    }
	}
	cout<<"\n Total of Upper Triangle = "<<ut
	    <<"\n Total of Lower Triangle = "<<lt;
	getch();
}
// **************************** rowsort() **********************************
void matrix::rowsort()
{
	int i,j,k,t;
	cout<<"\n Before Row sort";
	putdata(5,3);
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c-1;j++)
	    {
		for(k=0;k<((c-1)-j);k++)
		{
		    if(a[i][k]>a[i][k+1])
		    {
			t=a[i][k];
			a[i][k]=a[i][k+1];
			a[i][k+1]=t;
		    }
		}
	    }
	}
	cout<<"\n After Row sort";
	putdata(40,3);
}
// **************************** colsort() **********************************
void matrix::colsort()
{
	int i,j,k,t;
	cout<<"\n Before Column sort";
	putdata(5,3);
	for(i=0;i<r;i++)
	{
	    for(j=0;j<r-1;j++)
	    {
		for(k=0;k<((r-1)-j);k++)
		{
		    if(a[k][i]>a[k+1][i])
		    {
			t=a[k][i];
			a[k][i]=a[k+1][i];
			a[k+1][i]=t;
		    }
		}
	    }
	}
	cout<<"\n After Column sort";
	putdata(40,3);
}
// ******************************* rctot() ********************************
void matrix::rctot()
{
	int i,j;
	for(i=0;i<r-1;i++)
	{
	    a[i][c-1]=0;
	    for(j=0;j<c-1;j++)
		a[i][c-1]+=a[i][j];   // Row Total
	}
	for(i=0;i<r;i++)
	{
	    a[r-1][i]=0;
	    for(j=0;j<c-1;j++)
		a[r-1][i]+=a[j][i];   // Column Total
	}
	putdata(40,3);
}
// *************************** magic() *************************************
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
	putdata(40,3);
}
// ******************************* putdata() *****************************
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
	getch();
}
// **************************** main() **********************************
void main()
{
	// matrix ob;	//error
	matrix ob1(3,4),ob2(4,3),ob3(3,3),ob4(3,3),ob5(3,3),ob6(4,4);
	clrscr();
	ob1.getdata(5,3);
	ob1.transpose(ob2);
	ob2.putdata(40,3);

	clrscr();
	ob3.getdata(5,3);
	ob4.getdata(5,3);
	ob5.add(ob3,ob4);

	clrscr();
	ob5.mul(ob3,ob4);

	ob5.fdbd();

	ob5.utlt1();
	ob5.utlt2();

	clrscr();
	ob5.rowsort();

	clrscr();
	ob5.colsort();

	ob6.getdata2(5,3);
	clrscr();
	cout<<"\n Row Total and Column Total: ";
	ob6.rctot();

	clrscr();
	cout<<"\n Magic Matrix: ";
	ob5.magic();
}