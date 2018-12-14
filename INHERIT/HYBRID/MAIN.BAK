// use of virtual keyword
// An authentic example of Hybrid Inheritance

#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
    protected:
	int rollno;
    public:
	void getrollno();
	void putrollno();
};
class test:public virtual student      // If i will not use virtual then it will show error
{
    protected:
	int c,cpp;
    public:
	void getmarks();
	void putmarks();
};
class sports:virtual public student   // If i will not use virtual then it will show error
{
    protected:
	int score;
    public:
	void getscore();
	void putscore();
};
class result:public test,sports
{
    private:
	int tot,per;
    protected:
	char grade[10];
    public:
	void calresult();
	void dispresult();
};
void student::getrollno()
{
	cout<<"\n Enter roll no: ";
	cin>>rollno;
}
void test::getmarks()
{
	cout<<"\n Enter marks of C and Cpp: ";
	cin>>c>>cpp;
}
void sports::getscore()
{
	cout<<"\n Enter obtained scores: ";
	cin>>score;
}
void student::putrollno()
{
	cout<<"\n Roll no = "<<rollno;
}
void test::putmarks()
{
	cout<<"\n C = "<<c<<" Cpp = "<<cpp;
}
void sports::putscore()
{
	cout<<"\n Obtained scores = "<<score;
}
void result::calresult()
{
	clrscr();
	getrollno();
	getmarks();
	getscore();

	tot=c+cpp+score;
	per=tot/3;
	if(per>=90)
	    strcpy(grade,"A");
	else if(per>=70)
	    strcpy(grade,"B");
	    else if(per>=50)
		    strcpy(grade,"PASS");
		else
		    strcpy(grade,"FAIL");
}
void result::dispresult()
{
	clrscr();
	putrollno();
	putmarks();
	putscore();
	cout<<"\n TOTAL = "<<tot<<"\n PERCENTAGE = "<<per<<"\n GRADE = "<<grade;
	getch();
}
void main()
{
	result ob;
	ob.calresult();
	ob.dispresult();
}