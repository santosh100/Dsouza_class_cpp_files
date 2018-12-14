/* 		      	      TYPE CONVERSION

	1. Class to Built in (type overloading)
	2. Built in to Class (on constructor)
	3. One class to Another   */

// Example of 1. Class to Built in and 2. Built in to class
// For Oners class to another see exam2.cpp

#include<iostream.h>
#include<conio.h>
class Time
{
	int hr,mi;
    public:
	Time(int t)
	{
	    hr=t/60;
	    mi=t%60;
	}
	Time()
	{
	}
	operator int()      // type overloading
	{
	    int t;
	    t=hr*60+mi;
	    return(t);
	}
	operator float()    // type overloading
	{
	    float t;
	    t=hr*60+mi;
	    t+=.05;
	    return(t);
	}
	void puttime()
	{
	    cout<<"\n Hour = "<<hr
		<<"\n Minutes = "<<mi;
	}
};
void main()
{
	clrscr();
	Time t1(150),t2;
	int k;
	cout<<"\n Enter time in minutes : ";
	cin>>k;
	Time t3(k);

	t2=k;		// Implicite (Built_in to class)
	//OR
	t2=Time(k);	// Explicite (Built_in to class)

	int p;
	p=t1;		// Class to Built_in
	cout<<"\n p = "<<p;

	float x;
	x=t1;		// Class to Built_in
	cout<<"\n x = "<<x;

	cout<<"\n t1 :";
	t1.puttime();
	cout<<"\n t2 :";
	t2.puttime();
	cout<<"\n t3 :";
	t3.puttime();
	getch();
}
