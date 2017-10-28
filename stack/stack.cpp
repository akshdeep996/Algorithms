/*  Simple Stack program*/
#include<iostream>
//#include<bits/stdc++.h>

using namespace std;

int array[100];
int index;


void push(int x)
{

index++;

array[index]=x;

}

bool isEmpty()
{

if(index>=1) return false;
else return true;

}

void pop()
{

if(isEmpty())
{

cout<<"Its empty\n";

}
else {

--index;

}

}

void display(){

for(int i=1;i<=index;i++)
{
cout<<"  "<<array[i]<<"  "<<endl;
}
}

void top(){

if(isEmpty())
{
cout<<"Empty\n";
}
else cout<<"top\t"<<array[index]<<endl;
}

int main()
{

index=0;

push(5);
push(6);
pop();
push(8);
display();
top();

}







