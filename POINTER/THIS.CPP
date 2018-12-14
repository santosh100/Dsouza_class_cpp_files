#include<iostream.h>
#include<conio.h>
#include<string.h>
class emp
{
	int empno;
	char *name;
	int l;
	public:
	    emp(int empno,char *name)
	    {
		this->empno=empno;
		l=strlen(name);
		this->name=new char[l+1];
		strcpy(this->name,name);
	    }
	    emp()
	    {
	    }
	    emp & greater(emp&);
	    void putdata();
};
emp&emp::greater(emp&k)
{
	if(k.empno>empno)
		return(k);
	else
		return(*this);
}
void emp::putdata()
{
	cout<<"\n empno = "<<empno
	    <<"\n name = "<<name;
}
void main()
{
	clrscr();
	emp x(10,"ram");
	emp y(20,"syam");
	emp z,p;
	z=x.greater(y);
	p=y.greater(x);
	x.putdata();
	y.putdata();
	z.putdata();
	p.putdata();
}