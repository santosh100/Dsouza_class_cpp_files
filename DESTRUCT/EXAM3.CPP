#include<iostream.h>
#include<conio.h>
#include<string.h>
/*
class st
{
	char n[20];
	int age;
    public:
	st(char *p,int a)
	{
	    strcpy(n,p);
	    age=a;                           // old procedure
	}
	void putstr();
};
void main()
{
	st ob1("ram",10);
	st ob2("abcd",20);
}  */
//******************************************************************
class st
{
	char *n;
	int l,age;
    public:
	st(char *p,int a)
	{
	    l=strlen(p);
	    n=new char[l+1];
	    strcpy(n,p);
	    age=a;
	}
	st()
	{
	}

	void putst();
	void merge(st&,st&);
};
void st::putst()
{
	cout<<"\n Name : "<<n
	    <<"\n length: "<<l
	    <<"\n age = "<<age;
}
void st::merge(st& k1, st& k2)
{
	l=k1.l+k2.l;
	n=new char[l+2];
	strcpy(n,k1.n);
	strcat(n," ");
	strcat(n,k2.n);
	age=k1.age+k2.age;
}
void main()
{
	st ob1("ram",10),ob2("shyam",20),ob3;
	ob3.merge(ob1,ob2);
	cout<<"\n Contents in ob1:= ";
	ob1.putst();
	cout<<"\n Contents in ob2:= ";
	ob2.putst();
	cout<<"\n Contents in ob3 after merging:= ";
	ob3.putst();
	getch();
}
