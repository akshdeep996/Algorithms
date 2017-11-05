#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int s,t,a,b,m,n,input;
//   int app[1005],oran[1005];
   int appt,orant,ch;
   vector<int> app;
   vector<int> oran;

   cin>>s>>t;
   cin>>a>>b;
   cin>>m>>n;

   for(int i=0;i<m;i++)
   {
    cin>>input;
    app.push_back(input);

   }

   for(int i=0;i<n;i++)
   {
    cin>>input;
    oran.push_back(input);
   }

   appt=0;
   orant=0;

    for(int j=0;j<m;j++)
    {

        ch=a+app[j];

    if(ch>=s && ch<=t)
    {
        appt++;
    }

    }

    for(int j=0;j<n;j++)
    {
        ch=b+oran[j];

    if(ch>=s && ch<=t)
    {

        orant++;

    }

    }

    cout<<appt<<"\n";
    cout<<orant<<"\n";
    app.clear();
    oran.clear();
}

