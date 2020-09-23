#include<iostream>
using namespace std;

int main()
{
    int arr[], size;
    cout<<"Size of array:"<<endl;
    cin>>size;
    cout<<"Array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int j=0, k=size-1;
    while(j<k)
    {
        int temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
        j++;
        k--;
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i] ;
    }
}