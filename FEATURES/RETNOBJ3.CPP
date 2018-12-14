		// FUNTION RETURNING AN OBJECT
		// Function overloading

#include<iostream.h>
#include<conio.h>
class Dis
{
	int fit,in;
    public:
	void getdis(int t)
	{
	    fit=t/12;
	    in=t%12;
	}
	Dis add(Dis &);
	Dis add(Dis &,Dis&);
	void putdis();
};
void Dis::putdis()
{
	cout<<"\n Fit = "<<fit
	    <<"\n Inches = "<<in;
	getch();
}
Dis Dis::add(Dis&k)
{
	Dis temp;
	temp.fit=fit+k.fit;
	temp.in=(in+k.in)%12;
	temp.fit+=(in+k.in)/12;
	return(temp);
}
Dis Dis::add(Dis&k1,Dis&k2)
{
	Dis temp;
	temp.fit=fit+k1.fit+k2.fit;
	temp.in=(in+k1.in+k2.in)%12;
	temp.fit+=(in+k1.in+k2.in)/12;
	return(temp);
}
void main()
{
	Dis d1,d2,d3,d4;
	d1.getdis(20);
	d2.getdis(30);
	d3=d1.add(d2);
	clrscr();
	cout<<"\n Details of d1: ";
	d1.putdis();
	cout<<"\n\n Details of d2: ";
	d2.putdis();
	cout<<"\n\n After adding d1 and d2 to d3: ";
	d3.putdis();
	d4=d1.add(d2,d3);
	cout<<"\n\n After adding d1,d2 and d3 to d4: ";
	d4.putdis();
}