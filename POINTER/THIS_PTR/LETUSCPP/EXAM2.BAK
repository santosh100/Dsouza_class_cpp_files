
			// A MORE PRACTICAL USE OF this POINTER
#include<iostream.h>
#include<conio.h>
class circle
{
    private:
	int radius;
	float x,y;
    public:
	circle()
	{
	}
	circle(int rr,float xx,float yy)
	{
		radius=rr;
		x=xx;
		y=yy;
	}
/* ************************************************************

 This function will work (no problem) but,it returns a value
 by creating a temporary CIRCLE object and intialising it
 using the three-argument constructor.
 Note that the value returned is a copy of the object.
 However returning by value  creates an extra copy of the object,
 which means wastage of memory space. */

    /*	circle operator = (circle &c)
	{
		cout<<endl<<"Assignment operator invoked";
		radius=c.radius;
		x=c.x;
		y=c.y;
		return circle(radius,x,y);
	}   */

/* *************************************************************

 We know that when an object is returned by reference,
 no new object is created.

 Then can we not retuen the value from the overloaded operator function by
 reference using a declaration like:  */

    /*  circle& operator = (circle &c)
	{
		cout<<endl<<"Assignment operator invoked";
		radius=c.radius;
		x=c.x;
		y=c.y;
		return circle(radius,x,y);
	} */

/* Unfortunately, we con't use reference returns on variables that are local
 to a function since the local variables are destroyed when the function returns.

 This problem can be overcome using a this pointer as shown below: */

	circle& operator = (circle &c)
	{
		cout<<endl<<"Assignment operator invoked";
		radius=c.radius;
		x=c.x;
		y=c.y;
		return *this;
	}
 //**********************************************************************
	void showdata()
	{
		cout<<endl<<"\n Radius = "<<radius;
		cout<<endl<<"\n X-coordinate = "<<x;
		cout<<endl<<"\n Y-coordinate = "<<y<<endl;
	}
};
int main()
{
	circle c1(10,2.5,2.5);
	circle c2,c3;
	c3=c2=c1;
	c1.showdata();
	c2.showdata();
	c3.showdata();
	return 0;
}