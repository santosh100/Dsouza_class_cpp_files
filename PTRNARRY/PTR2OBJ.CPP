// Concept of POINTER TO OBJECT

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b;
    public:
	void getdata();
	void putdata();
};
void Abc::getdata()
{
	cout<<"\n Enter two ns :";
	cin>>a>>b;
}
void Abc::putdata()
{
	cout<<"\n a = "<<a
	    <<"\n b = "<<b;
}

void main()
{
	clrscr();
   //	Abc x;		//less usefull
   //	Abc x[5];       //less usefull
	Abc *x;         //More usefull
	int n,i;
	cout<<"\n How many records: ";
	cin>>n;

	x=new Abc[n];

  /*	for(i=0;i<n;i++)
	    x[i].getdata();      // ARRAY WAY
	for(i=0;i<n;i++);
	    x[i].putdata();        */

	for(i=0;i<n;i++)
	    (x+i)->getdata();
	for(i=0;i<n;i++)         // IS THE BEST WAY (METHOD)
	    (x+i)->putdata();

  /*	Abc *t;
	t=x;
	for(i=0;i<n;i++,x++)
	    x->getdata();        // ANOTHER WAY TAKING ANOTHER POINTER
	x=t;
	for(i=0;i<n;i++,x++)
	    x->putdata();    */
      getch();
}