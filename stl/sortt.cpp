/* Sorting using stl  with complexity O(n*log(n))*/

#include<bits/stdc++.h>
using namespace std;

// For Descending order use cmp function

bool cmp (int x,int y)
{

	return x>y;

}

int main() 
{

int a[]={1,15,6,17,8};

//sort(a+0,a+5); // ascending sort (start,final)

sort(a+0,a+5,cmp);  //descending sort (final,start)

for(int i=0;i<=4;i++)
{

cout<<a[i]<<"\t";

}

}

