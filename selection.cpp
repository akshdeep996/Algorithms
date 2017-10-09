#include<iostream>
using namespace std;

int main()
{

int a[5]={22,12,8,5,111};
int key,i,j,temp;


for(i=0;i<5;i++)
{

key=i;
	for(j=i;j<5;j++)

		if(a[key]>a[j])
	{
			key=j;
	}
	
	temp=a[i];
	a[i]=a[key];
	a[key]=temp;

}

for(i=0;i<5;i++)
{

cout<<a[i]<<endl;

}


}
