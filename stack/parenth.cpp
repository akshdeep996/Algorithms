/*  Stack Program to check if parenthesis are statically correct or not*/

#include <bits/stdc++.h>

using namespace std;

int array[100];
int inda;
char input[100];

void push(int x)
{

inda++;

array[inda]=x;

}

bool isEmpty()
{

if(inda>=1) return false;
else return true;

}

void pop()
{

if(isEmpty())
{

cout<<"Its empty\n";

}
else {

--inda;

}

}

void display(){

for(int i=1;i<=inda;i++)
{
cout<<"  "<<array[i]<<"  "<<endl;
}
}

void top(){

if(isEmpty())
{
cout<<"Empty\n";
}
else cout<<"top\t"<<array[inda]<<endl;
}

bool verify(char input[]) {

int length;

length=strlen(input);

for(int i=0;i<length;i++)
{

if(input[i]=='(') push(1);
else if(input[i]=='[') push(2);
else if(input[i]=='{') push(3);

else if(input[i]==')')
{
if(isEmpty() || array[inda] != 1) return false;
else {

pop();

}
}

else if(input[i]==']')
{
if(isEmpty() || array[inda] != 2) return false;
else pop();
}

else if(input[i]=='}')
{
if(isEmpty() || array[inda] != 3) return false;
else {
pop();
}

}

}

if(isEmpty()) return true;
else return false;


}


int main()
{


inda=0;

cin>>input;

cout << verify(input);

}







