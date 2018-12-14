// -> Concept of THIS Pointer
// -> Function returning object refrence

//Note:- when parameter name and member name is same then we use this pointer
//     but actually this poiner keeps the refrence of corrent object

#include<iostream.h>
#include<conio.h>
#include<string.h>
class Emp
{
	int empno;
	char *name;
	int l;
    public:
	Emp(int empno,char* name)
	{
	    this->empno=empno;  // when parameter name and member name is same them we use this
				// pointer this poiner keeps the refrence of corrent object
	    l=strlen(name);
	    this->name=new char(l+1);
	    strcpy(this->name,name);
	}
	Emp()
	{
	}
	Emp & greater(Emp&);
	void putdata();
};
Emp & Emp::greater(Emp &k)
{
	if(k.empno>empno)
	    return(k);
	else
	    return(*this);
}
void Emp::putdata()
{
	cout<<"\n Emp no = "<<empno
	    <<"\n Name = "<<name;
}

void main()
{
    clrscr();
	Emp x(10,"ram");
	Emp y(20,"syam");
	Emp z,p;
	z=x.greater(y);    // here this ptr will return refrence of x
	p=y.greater(x);    // here this ptr will return refrence of y

	x.putdata();
	y.putdata();
	x.putdata();
	p.putdata();
    getch();
}