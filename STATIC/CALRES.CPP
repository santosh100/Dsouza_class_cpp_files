#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int rollno;
	char name[10];
	int marks[5];
	char res[5];
	int tot,per;
    static int totper,ctr;
    public:
	void getdata();
	void calres();
	void putdata();
    static void printavg();
};
int student::totper;
int student::ctr;
void student::getdata()
{
	clrscr();
	cout<<"\n Enter Roll no: ";
	cin>>rollno;
	cout<<"\n Enter Name: ";
	cin>>name;
	cout<<"\n Enter marks of five subjects: ";
	for(int i=0;i<5;i++)
	   cin>>marks[i];
}
void student::calres()
{
	tot=0;
	int flag=0;int n;
	for(int i=0;i<5;i++)
	{
	   if(marks[i]>=35)
		flag++;
	   else
		n=i;
	   tot+=marks[i];
	}
	if(flag==4)
	{
	    if(marks[n]<35&&marks[n]>=30)
	    {
		tot+=35-marks[n];
		marks[n]=35;
		flag++;
	    }
	}
	per=tot/5;
	if(flag==5)
	{
	    strcpy(res,"Pass");
	    totper+=per;
	    ctr++;
	}
	else
	    strcpy(res,"Fail");
}
void student::putdata()
{
	clrscr();
	cout<<"\n Roll no = "<<rollno<<"\n Name = "<<name;
	cout<<"\n Marks of five subjects: ";
	for(int i=0;i<5;i++)
	    cout<<"\t"<<marks[i];
	cout<<"\n Total = "<<tot<<"\n Percentage = "<<per<<"\n Result = "<<res;
	getch();
}
void student::printavg()
{
	if(ctr>0)
	{
	    cout<<"\n\n Total no of student passed = "<<ctr;
	    cout<<"\n\n Average Percentage of only passed students = "<<totper/ctr;
	    cout<<"\n\n student passed "<<(ctr*100)/5<<" percent";
	}
	else
	    cout<<"\n All fail";
	getch();
}
void main()
{
	student ob[5];
	for(int i=0;i<5;i++)
	{
	     ob[i].getdata();
	     ob[i].calres();
	}
	for(i=0;i<5;i++)
	    ob[i].putdata();
	student::printavg();
}