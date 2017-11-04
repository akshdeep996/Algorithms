
/* C L R L */

#include <iostream>

using namespace std;

bool check(int a[],int r,int n)
{

int ri,tempr,li,templ;

ri=0;
li=0;

do
{
if(a[ri]>r)
{
tempr=a[ri];
}
ri++;
}while(a[ri-1]<r);

do
{
if(a[li]<r)
{
templ=a[li];
}
li++;
}while(a[li-1]>r);


for(ri=0;ri<n-1;ri++)
{

if((a[ri]>r && a[ri]>tempr) || ( a[ri]<r && a[ri]<templ))
{
    return 0;
}
else if(a[ri]>r && a[ri]<tempr)
{
tempr=a[ri];
}

else if(a[ri]<r && a[ri]>templ)
{
templ=a[ri];
}

}
return 1;
/*
for(li=0;li<n-1;li++)
{

if(a[li]<r && a[li]<templ)
{
    return 0;
}
else if(a[li]<r && a[li])
{
templ=a[li];
}
}
*/

}

/*
bool checkl(int a[],int r,int n)
{

int li,templ;

li=0;

do
{
if(a[li]<r)
{
templ=a[li];
}
li++;
}while(a[li-1]>r);

for(li=0;li<n-1;li++)
{

if(a[li]<r && a[li]<templ)
{
    return 0;
}
else if(a[li]<r && a[li])
{
templ=a[li];
}
}

return 1;
}
*/

int main()
{

int t,n,r;
int a[1005];
bool leftcheck,rightcheck;

cin>>t;

for(int k=0;k<t;k++)
{

cin>>n;
cin>>r;

for(int i=0;i<n;i++)
{
cin>>a[i];
}

//rightcheck=checkr(a,r,n);
//leftcheck=checkl(a,r,n);

if(a[n-1]!=r)
{
cout<<"NO\n";
}

if(check(a,r,n))
{

cout<<"YES\n";

}
else
{
cout<<"NO\n";
}
}

}

