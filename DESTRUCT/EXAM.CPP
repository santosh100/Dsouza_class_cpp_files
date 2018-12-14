 /*				Distructor

 A distructor is used to dellocate space from the memory (reclaim the space")
 after the use of an object is over i.e. after the scope of the object is over

-> The name of the distructor is same as the class name only it's precided by
   a ~ sign.
-> cannot be overloaded
-> implicit called
-> Should be in public area of the class. */

#include<iostream.h>
#include<conio.h>
int ctr=0;
class Abc
{
    public:
	Abc()
	{
	    cout<<"\n Constructor called"<<++ctr;
	}

	~Abc()
	{
	    cout<<"\n Distructor called"<<ctr--;
	}
};
void main()
{
	clrscr();
	Abc t,p,q;
	{
	    Abc y;
	}
	{
	    Abc b;
	}
    //	getch();  //   Don't use here getch();
}