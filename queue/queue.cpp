/* Queue */

#include<iostream>

using namespace std;

int frontind,backind;
int a[100];


void push(int x)
{

++backind;
a[backind]=x;


}

void pop()
{

a[frontind]=0;
frontind++;

}

bool isEmpty()
{

if(frontind > backind) return true;
else return false;

}

int front();
{
return a[frontind];
}

int main() 
{

frontind=0;
backind=-1;

push(4);
push(5);
pop();
pop();
cout<<isEmpty();



}
