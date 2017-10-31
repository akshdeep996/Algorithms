/* Basic program for using Template */

#include<iostream>
using namespace std;

template <typename t>

t add(t a,t b)
{

return a+b;

}


int main()
{

int a=10;
int b=20;
float c=10.3;
float d=20.6;

cout<<add(a,b)<<endl;
cout<<add(c,d)<<endl;

}
