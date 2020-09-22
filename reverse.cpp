#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int n;
	cin>>n;
	if(not(n>=1 and n<=100)){
		cout<<"wrong input range"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int temp;
	for(int i=0;i<=n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}


	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
} 