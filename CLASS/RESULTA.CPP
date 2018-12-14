			// CLASS USING ARRAY WITH MULTIPLE OBJECT

#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int rollno;              // Without writing private it takes as a private within class
	char name[10];
	char sub[5][10];
	int marks[5];
	int tot;
	float per;
	char result[10];
    public :
	void getdata();
	void calresult();
	void display();
};
void student::getdata()
{
	cout<<"\n Enter rollno:  ";
	cin>>rollno;
	cout<<"\n Enter name:    ";
	cin>>name;
	cout<<"\n Enter five subjects: ";
	for(int i=0;i<5;i++)
	    cin>>sub[i];
	cout<<"\n Enter marks: ";
	for(i=0;i<5;i++)
	    cin>>marks[i];
}
void student::calresult()
{
	tot=0,per=0;
	for(int i=0;i<5;i++)
	    tot+=marks[i];
	per=(float)tot/5;
	if(per>=90)
	    strcpy(result,"A+");
	else
	    if(per>=70)
		strcpy(result,"B");
	    else
		if(per>=50)
		    strcpy(result,"Pass");
		else
		    strcpy(result,"Fail");
}
void student::display()
{
	clrscr();
	cout<<"\nRoll No: "<<rollno
	    <<"\nName: "<<name;
	for(int i=0;i<5;i++)
	  cout<<"\n"<<sub[i]<<" = "<<marks[i];
	  cout<<"\nTotal = "<<tot
	      <<"\nPercentage = "<<per
	      <<"\nResult = "<<result
	      <<"\n*****************************";

}
void main()
{
	clrscr();
	student cmd[2];
	cout<<"\n DETAILS OF CMD COLLEGE";
	for(int i=0;i<2;i++)
	{
	    clrscr();
	    cmd[i].getdata();
	}
	for(i=0;i<2;i++)
	{
		cmd[i].calresult();
		cmd[i].display();
		getch();
	}
	student dp[2];
	for(i=0;i<2;i++)
	{
	    clrscr();
	    dp[i].getdata();
	}
	for(i=0;i<2;i++)
	{
		dp[i].calresult();
		dp[i].display();
		getch();
	}
}
