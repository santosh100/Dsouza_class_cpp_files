#include<iostream.h>
#include<conio.h>
class Time
{
	int mi,hr;
    public:
	void gettime(int t)
	{
	    mi=t%60;
	    hr=t/60;
	}
	Time add(Time&);
	void puttime();
};
void Time::puttime()
{
	cout<<"\n Hours = "<<hr
	      <<"\n Minuts = "<<mi;
	getch();
}
Time Time::add(Time&k)
{
	Time temp;
	temp.hr=hr+k.hr;
	temp.mi=mi+k.mi;
	temp.hr+=temp.mi/60;
	temp.mi%=60;
	return(temp);
}
void main()
{
	Time t1,t2,t3;
	t1.gettime(160);
	t2.gettime(150);
	t3=t1.add(t2);
	clrscr();
	cout<<"\n   Details of t1: ";
	t1.puttime();
	cout<<"\n\n   Details of t2: ";
	t2.puttime();
	cout<<"\n\n   After adding t1 and t2 to t3: ";
	t3.puttime();	
}
