#include<iostream>
using namespace std;

int main()
{

int num;

cout<<"Enter number"<<endl;
cin>>num;

if(num == 0 || num == 1)
{
cout<<"0 and 1 are not prime"<<endl;
return 0;
}

for(int i=2;i<num;i++)
{
	if(num%i==0)
	{
		cout<<"Its not a prime number"<<endl;
		return 0;
	}
}

cout<<"Its prime"<<endl;

}
