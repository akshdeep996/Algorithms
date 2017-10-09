#include<iostream>
using namespace std;

int main()
{

int a[5]={2,5,1,9,6};
int i,j,temp;

for(i=0;i<5;i++)
	
	for(j=0;j<5-i;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}

	}

for(i=0;i<5;i++)
{
cout<<a[i]<<endl;
}

}
