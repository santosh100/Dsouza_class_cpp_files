#include<iostream.h>
#include<conio.h>
#include<ctype.h>
class emp
{
    private:
	char name[20],grade;
	int sal,bon;
    public:
	void getdata()
	{
	    cout<<"\n Enter Employee name, salary and grade: ";
	    cin>>name>>sal>>grade;
	    grade=toupper(grade);
	}
    inline void calbon();
    inline void putdata();
};
void emp::calbon()
{
	bon=0;
	if(grade=='A')
	    bon=sal*.1;
	else
	    if(grade=='B')
		bon=sal*.2;
	    else
		if(grade=='C')
		    bon=sal*30/100;      // if i'm writing sal*.3 its creating problem
		else
		    bon=sal*.08;
}
void emp::putdata()
{
	cout<<"\n Name: "<<name
	    <<"\n Salary: "<<sal
	    <<"\n Grade: "<<grade
	    <<"\n Bonus: "<<bon
	    <<"\n *******************";
}
void main()
{
	clrscr();
	emp x;
	x.getdata();
	x.calbon();
	x.putdata();
	emp y;
	y.getdata();
	y.calbon();
	y.putdata();
	getch();
}