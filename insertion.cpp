#include<iostream>
using namespace std;

int main()
{

int a[5]={4,6,1,2,3};
int i,j,hole;

for(i=1;i<5;i++)
{
hole=a[i];
j=i-1;
	{
	
		while(a[j]>hole && j>=0)
	{
			a[j+1]=a[j];
			j--;
	}
		a[j+1]=hole;
	}
}

for(i=0;i<5;i++)
{

cout<<a[i]<<endl;

}
}
