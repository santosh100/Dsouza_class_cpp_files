#include<iostream.h>
#include<conio.h>
void main()
{
	int n[2][2]={{1,2},{3,4}};
	int m[2][2]={{4,5},{1,2}};
	int s[2][2],i,j,x,y;
	clrscr();
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
		s[i][j]=n[i][j]+m[i][j];
	}
	cout<<"\n After adding: ";
	for(y=3,i=0;i<2;i++,y+=2)
	{
	    for(x=5,j=0;j<2;j++,x+=5)
	    {
		gotoxy(x,y);
		cout<<s[i][j];
	    }
	}
}