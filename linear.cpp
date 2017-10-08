#include<iostream>
using namespace std;

int main()
{

int num,key;
int a[100];

cout<<"Enter no. of array \n";
cin>>num;

cout<<"\nEnter values \n";

for(int i=0;i<num;i++)
{

cin>>a[i];

}

cout<<"\nEnter the no. to be searched\n";
cin>>key;

for(int i=0;i<num;i++)
{

if(key == a[i])
{
cout<<"Found at pos \t"<<i+1<<endl;
return 0;
}
}
cout<<"Not found\n";



}
