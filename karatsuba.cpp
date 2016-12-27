/* Karatsuba Multiplication algorithm  10^n * a*c + 10^(n/2) * (ad + bc) + bd */

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	/* code */

	int x,y,x1,y1,a,b,c,d,p,q,r,s,n,count1,count2;
	int power,power1,product;

	count1=0;	
	count2=0;	

	
	
	/* ASK FOR NUMBERS*/

	cout<<"Input first number X must be even \n";
	cin>>x;

	cout<<"Input Second number Y must be even \n";
	cin>>y;

	/* Now count no. of digits in each */

	x1=x;
	y1=y;
	while(x1!=0)
	{
		x1/=10;
		++count1;
		
	}

	while(y1!=0)
	{
		y1/=10;
		++count2;
		
		
	}

	cout<<count1<<endl;
	cout<<count2<<endl;

/* Check whether both have same digit */

	if(count1!=count2)
	{
		cout<<"PLease make sure u enter same no. of digits";
		return 0;
	}

/* Now store a,b,c,d*/

	power=pow(10,count1/2);
	power1=pow(10,count1);

	a=x/power;
	

    b=x%power;

	c= y/power;
	d= y% power;

	p=a*c;
	q=b*d;
	r=(a+b)*(c+d);
	
	

	if (p>q)
	{
		
		s=r-p-q;
	}

	else 
	{
		s=r-q-p;
	}

	cout<<"power\t"<<power<<endl;
	cout<<"a\t"<<a<<"\n";
	cout<<"b\t"<<b<<"\n";
	cout<<"c\t"<<c<<"\n";
	cout<<"d\t"<<d<<"\n";
	cout<<"p\t"<<p<<"\n";
	cout<<"q\t"<<q<<"\n";
	cout<<"r\t"<<r<<"\n";
	cout<<"s\t"<<s<<"\n";

	product = power1*p+q+power*s;

	cout<<"Product is \t"<<product<<endl;

	return 0;
}
