#include<iostream.h>
#include<conio.h>
class emp
{
    private:
	int empno;
	char name[20];
	int sal;
	int bon;
	int tot;
    public:
	void getdata()
	{
		clrscr();
	    cout<<"\n ENPNO \t NAME \t SALARY:\n";
	    cin>>empno>>name>>sal;
	}
	void calbon();
	void display();
};
void emp::calbon()
{
	bon=0,tot=0;
	if(sal<=5000)
	    bon=sal*.1;
	else
	    bon=sal*.5;
	tot=bon+sal;
}
void emp::display()
{
	clrscr();
	cout<<"\n EMPNO:  "<<empno
	    <<"\n NAME:   "<<name
	    <<"\n SALARY: "<<sal
	    <<"\n BONUS:  "<<bon
	    <<"\n TOTAL:  "<<tot;
	getch();
}
void main()
{
	emp x;
	    x.getdata();
	    x.calbon();
	    x.display();
	emp y;
	    y.getdata();
	    y.calbon();
	    y.display();
}