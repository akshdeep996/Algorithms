#include<iostream>
using namespace std;

int binary(int a[],int l,int r,int key);

int main()
{

int num,key,r;
int a[100];

cout<<"No. of arrays \n";
cin>>num;
cout<<num;
cout<<"Input array element in ascending order \n ";

for(int i = 0; i<num; i++)
{
cin>>a[i];
}

cout<<"Enter the no. to be searched \n";
cin>>key;


binary(a,0,num-1,key);

cout<<"Not found\n";

}

int binary(int a[],int l,int r,int key)
{

cout<<"Entered binary"<<endl;

int mid;

//cout<<"\nValue of l\n"<<l<<endl;
//cout<<"Value of r\n"<<r<<endl;


if(l>r)
{
//    cout<<"\nValue of l\n"<<l<<endl;
  //  cout<<"Value of r\n"<<r<<endl;
    //cout<<"Value of mid"<<mid<<endl;
    cout<<"Not found";
    return 0;
}
mid = l+r;
//cout<<"mid add \t"<<mid<<endl;
mid = mid/2;
//cout<<"mid / 2 \t"<<mid<<endl;

if(a[mid]==key)
{
    cout<<"Found at "<<mid<<endl;
}

else if(a[mid]>key)
{
//cout<<"I am in left part\n\n";
//cout<<"\nValue of l\n"<<l<<endl;
//cout<<"Value of r\n"<<r<<endl;
cout<<endl<<endl;
 binary(a,0,mid-1,key);
}
else if (a[mid]<key)
{
//	cout<<"I am in Right part\n\n";
//cout<<"\nValue of l\n"<<l<<endl;
//cout<<"Value of r\n"<<r<<endl;
//cout<<endl<<endl;
    binary(a,mid+1,r,key);
}
}
