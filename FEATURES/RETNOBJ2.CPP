		/* This program introduces following two concepts

		     1. RETURNING OBJECT AS PARAMETER
		     2. FUNCTION OVERLOADING SENDING OBJECT AS PARAMETER
		     3. Call by reference  */

#include<iostream.h>
#include<conio.h>
class Time
{
	int hr,mi;
	public:
	void gettime(int t)
	{
	    hr=t/60;
	    mi=t%60;
	}
	void puttime();
	Time add(Time &);
	Time add(Time &,Time &);
};
void Time::puttime()
{
	cout<<"\n Hour = "<<hr
	      <<"\n Minuts = "<<mi;
	getch();
}
Time Time::add(Time &k)
{
	Time temp;
	temp.hr=hr+k.hr;
	temp.mi=(mi+k.mi)%60;
	temp.hr+=(mi+k.mi)/60;
	return(temp);
}
Time Time::add(Time &k1,Time &k2)
{
	Time temp;
	temp.hr=hr+k1.hr+k2.hr;
	temp.mi=(mi+k1.mi+k2.mi)%60;
	temp.hr+=(mi+k1.mi+k2.mi)/60;
	return (temp);
}
void main()
{
	Time t1,t2,t3,t4;
	t1.gettime(160);
	t2.gettime(150);
	t3=t1.add(t2);
	clrscr();
	cout<<"\n Details of t1: ";
	t1.puttime();
	cout<<"\n\n Details of t2: ";
	t2.puttime();
	cout<<"\n\n After adding t1 and t2 to t3: ";
	t3.puttime();
	t4=t1.add(t2,t3);
	cout<<"\n\n After adding t1,t2 and t3 to t4: ";
	t4.puttime();
}