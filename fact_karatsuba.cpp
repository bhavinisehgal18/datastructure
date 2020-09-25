#include<iostream>
#include "karatsuba.h"
using namespace std;
long long int fact(long long int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return multiply(n,fact(n-1));
}
int main()
{
	long long int n;
    long long int a;
    long long int b;
    cout<<"Enter the first number: \n";
    cin>>a;
    cout<<"Enter the second number: \n";
    cin>>b;
    cout<<"The product of two numbers is: "<<multiply(a,b)<<"\n";
    cout<<"Enter the number to find the factorial: ";
	cin>>n;
    cout<<"Factorial of a number is: "<<fact(n)<<"\n";
}