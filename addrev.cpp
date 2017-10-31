/*                               ADDREV                           */

#include<iostream>
using namespace std;

int reverse(int a)
{

int temp;
int c=0;


while(a!=0)
{

temp=a%10;
a=a/10;
c=c*10+temp;

}

return c;

}

int main()
{

int a,b,n,sum,rev;
int arev,brev;
cin>>n;

for(int i=0;i<n;i++)
{
cin>>a>>b;

arev=reverse(a);
brev=reverse(b);

sum=arev+brev;

rev=reverse(sum);

cout<<rev<<endl;
}

}
