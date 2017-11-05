#include <iostream>

using namespace std;

int round(int numb)
{

int a;

a=numb%5;

if(numb<38 || a<3)
{

return numb;

}

else if (a>=3)
{

return numb+(5-a);

}
}

int main()
{

int t,i,numb;

cin>>t;

for(i=0;i<t;i++)
{

cin>>numb;

cout<<round(numb)<<"\n";

}


}
