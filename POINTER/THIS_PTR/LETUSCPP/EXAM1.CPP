
			// THIS PROGRAM SHOWS THE WORKING OF THIS POINTER
			// THIS POINTER KEEPS THE ADDRESS OF AN OBJECT

#include<iostream.h>
#include<conio.h>
class example
{
    private:
	int i;
    public:
	void setdata(int ii)
	{
	   //	i=ii;	// One way to set data
		cout<<endl<<"my object's address is "<<this;
		this->i=ii; // Another way to setdata
	}
	void showdata()
	{
	   //	cout<<i;	// One way to display data
		cout<<endl<<"my object's address is "<<this<<endl;
		cout<<this->i<<endl; // Another way to display data
	}
};
int main()
{
	example e1;
	e1.setdata(10);
	e1.showdata();
	return 0;
}