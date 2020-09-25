#include<iostream>
#include<math.h>
using namespace std;
long long int multiply(long long int a,long long int b)
{
	int l1=0,l2=0;
	long long int m=a,n=b;
	while(m!=0)
	{
		m=m/10;
		l1++;
	}
	while(n!=0)
	{
		n=n/10;
		l2++;
	}
	int x=max(l1,l2);
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
		return a*b;
	}
	else
	{
		int p;
		if(x%2==0)
		{
			p=x/2;
		}
		else
		{
			p=x/2+x%2;
		}
		long long int x1=(a/pow(10,p));
		long long int x2=(a-x1*(pow(10,p)));
		long long int x3=(b/pow(10,p));
		long long int x4=(b-x3*(pow(10,p)));
		long long int m1=multiply(x1,x3);
		long long int m2=multiply(x2,x4);
		long long int m3=multiply(x1+x2,x3+x4);
		return (m1*pow(10,2*p)+((m3-m1-m2)*(pow(10,p)))+m2);
	}
}

