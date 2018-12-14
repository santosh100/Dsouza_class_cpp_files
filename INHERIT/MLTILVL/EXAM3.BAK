// Authentic Example of multilevel inheritance inherited public

#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
    protected:
	int rollno;
    public:
	void getroll();
	void putroll();
};
class test:public student
{
    protected:
	int c,cpp;
    public:
	void getmarks();
	void putmarks();
};
class result:public test
{
	int tot,per;
    protected:
	char grade[20];
    public:
	void calresult();
	void disresult();
};
void student:: getroll()
{
	cout<<"\n Enter roll no: ";
	cin>>rollno;
}
void test::getmarks()
{
	cout<<"\n Enter C and CPP marks: ";
	cin>>c>>cpp;
}
void student::putroll()
{
	cout<<"\n Roll no = "<<rollno;
}
void test::putmarks()
{
	cout<<"\n C = "<<c
	    <<"\n CPP = "<<cpp;
}
void result::calresult()
{
	getroll();
	getmarks();
	tot=c+cpp;
	per=tot/2;

	if(per>=95)
	    strcpy(grade,"A");
	else
	    if(per>=80)
		strcpy(grade,"B");
	    else
		if(per>=50)
		    strcpy(grade,"Pass");
		else
		    strcpy(grade,"Fail");
}
void result::disresult()
{
	putroll();
	putmarks();
	cout<<"\n Total = "<<tot
	    <<"\n Percentage = "<<per
	    <<"\n Result = "<<grade;
}
void main()
{
	clrscr();
	result ob;
	ob.calresult();
	ob.disresult();
	getch();
}