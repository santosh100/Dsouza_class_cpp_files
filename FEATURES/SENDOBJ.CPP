			//  SENDING OBJECT AS PARAMETER
			//  Adding value of two objects of the same class and creating ob3

#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
    public:
	void getdata(int i,int j,int k)
	{
	    a=i,b=j,c=k;
	}
    inline void putdata();
	   void add(Abc,Abc);
};
void Abc::putdata()
{
	cout<<"\n a = "<<a
	    <<"\n b = "<<b
	    <<"\n c = "<<c;
	getch();
}
void Abc::add(Abc k1,Abc k2)
{
	a=k1.a+k2.a;
	b=k1.b+k2.b;
	c=k1.c+k2.c;
}
void main()
{
	Abc ob1,ob2,ob3;
	ob1.getdata(10,20,30);
	ob2.getdata(5,10,15);
	ob3.add(ob1,ob2);
	clrscr();
	cout<<"\n Details of Object1 : ";
	ob1.putdata();
	cout<<"\n Details of Object2 : ";
	ob2.putdata();
	cout<<"\n After adding ob1 and ob2 to ob3 :";
	ob3.putdata();
}