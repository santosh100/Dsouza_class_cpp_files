// THIS PROGRAM SHOWS HOW TO REPLACE THE ARRAY WAY ( DYNAMIC CONSTRUCTOR MEANS DYNAMIC ALLOCATION )
// REPLACING 1D ARRAY

#include<iostream.h>
#include<conio.h>
/* class Abc
{
	int a[5];
    public:
	void getdata();
	void putdata();

};
void main()
{
	Abc ob1,ob2;
} */
class Abc
{
	int *a,n;
    public:
	Abc(int t)
	{
	    n=t;
	    a=new int[n];
	}
	void getdata();
	void merge(Abc&,Abc&);
	void lsort();
	void bsort();
	void selsort();
	void inssort();
	void seqser();
	void biser();
	void putdata();
};
void Abc::getdata()
{
	int i;
	cout<<"\n Enter "<<n<<" values: ";
	for(i=0;i<n;i++)
	    cin>>a[i];
}
void Abc::merge(Abc&k1,Abc&k2)
{
	int i;
	for(i=0;i<k1.n;i++)
	     a[i]=k1.a[i];
	for(i=0;i<k2.n;i++)
	     a[k1.n+i]=k2.a[i];
}
void Abc::lsort()
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
		if(a[i]>a[j])
		{
		    t=a[i];
		    a[i]=a[j];
		    a[j]=t;
		}
	    }
	}
}
void Abc::bsort()
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<((n-1)-i);j++)
	    {
		if(a[j]>a[j+1])
		{
		    t=a[j];
		    a[j]=a[j+1];
		    a[j+1]=t;
		}
	    }
	}
}
void Abc::selsort()
{
	int i,j,loc,t;
	for(i=0;i<n-1;i++)
	{
	    t=a[i];
	    loc=i;
	    for(j=i+1;j<n;j++)
	    {
		if(a[j]<t)
		{
		    t=a[j];
		    loc=j;
		}
	    }
	    if(i!=loc)
	    {
		a[loc]=a[i];
		a[i]=t;
	    }
	}
}
void Abc::inssort()
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
	    t=a[i];
	    j=i-1;
	    while(t<a[j]&&j>=0)
	    {
		a[j+1]=a[j];
		j--;
	    }
	    a[j+1]=t;
	}
}
void Abc::seqser()
{
	int i,ser;
	cout<<"\n Enter no to search : ";
	cin>>ser;
	for(i=0;i<n;i++)
	{
	    if(a[i]==ser)
	    {
		cout<<"\n Search found ";
		break;
	    }
	}
	if(i==n)
	{
	    cout<<"\n Search not found ";
	}
}
void Abc::biser()
{
	int f=0,b=n-1,mid,ser;
	cout<<"\n Enter no to search : ";
	cin>>ser;
	while(f<=b)
	{
	    mid=(f+b)/2;
	    if(a[mid]==ser)
	    {
		cout<<" Search found ";
		break;
	    }
	    else
	    {
	       if(ser>a[mid])
		   f=mid+1;
	       else
		   b=mid-1;
	    }
	}
	if(f>b)
	    cout<<"\n search not found ";
}
void Abc::putdata()
{
	int i;
	cout<<"\n Printing "<<n<<" values: ";
	for(i=0;i<n;i++)
	    cout<<"   "<<a[i];
}
void main()
{
	// Abc ob;	// Error
	Abc ob1(5),ob2(3),ob3(8);
	clrscr();
	ob1.getdata();
	ob2.getdata();
	ob3.merge(ob1,ob2);
	cout<<"\n After merge: ";
	ob3.putdata();

	ob3.lsort();
	cout<<"\n After linier sort: ";
	ob3.putdata();

	ob3.getdata();
	ob3.bsort();
	cout<<"\n After bubble sort: ";
	ob3.putdata();

     //	ob3.getdata();
	ob3.selsort();
	cout<<"\n After selection sort: ";
	ob3.putdata();

     //	ob3.getdata();
	ob3.inssort();
	cout<<"\n After insertion sort: ";
	ob3.putdata();

	ob3.seqser();
	ob3.biser();
	getch();
}