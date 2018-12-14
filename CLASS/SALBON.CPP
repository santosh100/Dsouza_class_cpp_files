#include<iostream.h>
#include<conio.h>
class emp
{
    private:
	char name[20];
	int sal,bon;
    public:
	void getdata()
	{
	    cout<<"\n Enter Employee name and sal: ";
	    cin>>name>>sal;
	}
    inline void calbon();
    inline void putdata();
};
void emp::calbon()
{
	bon=0;
	if(sal<1000)
	    bon=0;
	else
	    if(sal<=5000)
		bon=sal*.1;
	    else
		if(sal<=10000)
		    bon=sal*.08;
		else
		    if(sal<=15000)
			bon=sal*.05;
}
void emp::putdata()
{
	cout<<"\n Name : "<<name
	    <<"\n salary :"<<sal
	    <<"\n bonus :"<<bon
	    <<"\n\n ****************";
}
void main()
{
	clrscr();
	emp x,y;
	x.getdata();
	x.calbon();
	x.putdata();
	y.getdata();
	y.calbon();
	y.putdata();
	getch();
}