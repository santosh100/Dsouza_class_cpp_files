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
	ob1.getdata();
	ob2.getdata();
	ob3.merge(ob1,ob2);
	cout<<"\n After merge: ";
	ob3.putdata();
}