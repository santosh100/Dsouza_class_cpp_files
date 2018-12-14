#include<iostream.h>
#include<conio.h>
#define SQUARE(x)x*x
inline float square(float y)
{
    return y*y;
}
void main()
{
    float a=0.5,b=0.5,c,d;
    c=SQUARE(++a);
    d=square(++b);
    cout<<" "<<c<<" "<<d;
}
