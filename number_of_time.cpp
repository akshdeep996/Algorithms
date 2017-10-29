
/* Number of occurance of a number in an array */

#include <bits/stdc++.h>

using namespace std;

long long a[100005];

long long binary(long long l,long long r,long long mid,long long element,int ok)
{

long long check,correct;

if(l>r)
{
return -1;
}

if(a[mid]==element)
{

correct=mid;
if(ok==1)
{
r=mid-1;
mid=(l+r)/2;
check = binary(l,r,mid,element,ok);
}
else if(ok==2)
{
l=mid+1;
mid=(l+r)/2;
check = binary(l,r,mid,element,ok);

}

if(check < 0)
{
return correct;
}



}
else if(element > a[mid])
{

l=mid+1;
mid=(l+r)/2;
binary(l,r,mid,element,ok);
}
else if(element < a[mid])
{

r=mid-1;
mid=(l+r)/2;
binary(l,r,mid,element,ok);
}

}


int main()
{
long long left,right,middle;
long long ele;
long long m,n;
int num_of_times,first_occur,last_occur;

scanf("%lld",&m);
scanf("%lld",&n);


left=0;
right=m-1;
middle=(left+right)/2;

for(long long i=0;i<m;i++)
{
scanf("%lld",&a[i]);
}


for(long long j=0;j<n;j++)
{

scanf("%lld",&ele);
//cin>>ele;

first_occur = binary(left,right,middle,ele,1);
last_occur = binary(left,right,middle,ele,2);

num_of_times = last_occur - first_occur + 1;

cout<<"It occured\t"<<num_of_times;

}
}

