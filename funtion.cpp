#include<iostream>
using namespace std;
int add ( int a, int b){

int sum = a+b;
return sum;
}
int main ()
{
int num1, num2;
cin>>num1;
cin>>num2;
int num= add (num1,num2);
cout<<num;
}
