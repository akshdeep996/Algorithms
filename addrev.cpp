
/*                               ADDREV                           */

#include<iostream>
using namespace std;

int reverse(int a)
{

int i=1;
int temp,counting,newa;
int c=0;

newa=a;
counting=1;

while(newa!=0)
{

newa=newa/10;
counting=counting*10;

}

counting=counting/10;

while(a!=0)
{

temp=a%10;


a=a/10;
temp=temp*counting;
c=c+temp;
counting=counting/10;


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

