
/* V I L T R I B E */

#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;

void check(string &s);

int main()
{
    int t,i,n;
    string s;
   // vector<string> s;


        cin>>t;

        for(i=0;i<t;i++)
       {
        cin>>s;
        check(s);
       }
}

void check(string &s)
{

int counta,countb,temp,tempor,j,a;

counta=0;
countb=0;
tempor=0;

a=s.size();


for(j=0;j<a;j++)
{
    if(s[j]=='A')
        {
            counta++;
        }
    else if(s[j]=='B')
        {
            countb++;
        }

        else if(s[j]=='.')
        {

        temp=j;

        while(s[temp]=='.' && temp<a)
        {
            temp++;

            if(s[temp]=='A')
            {
                tempor=j;
                while(s[tempor] =='.' && tempor>=0)
                {
                    tempor--;
                    if(s[tempor]=='A')
                    {
                        counta++;
                        break;

                    }

                }
            }
            else if(s[temp] == 'B')
            {
                tempor=j;
                while(s[tempor] =='.' && tempor>=0)
                {
                    tempor--;
                    if(s[tempor]=='B')
                    {
                        countb++;
                        break;
                    }

                }
            }
        }

        }
}
    cout<<counta<<" "<<countb<<"\n";
}


