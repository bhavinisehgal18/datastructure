#include <iostream>
using namespace std;
int main() 
{   
    int t;
    cin>>t;
    while(t!=0)
    {
    int n, k;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    int c=0;
    for(int i=1; i<=n; i++)
    {
        arr[i]=i;
    }
    if(n%2==0 && k!=n)
    {
        for(int i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
               arr[i]=(-i);
            }
        }
    }
    if(n%2!=0 && k!=n)
    {
        for(int i=1; i<=n; i++)
        {
            if(i%2==0)
            {
               arr[i]=(-i);
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        sum=sum+arr[i];
        if(sum>0)
        {
            c++;
        }
    }
                 
        if(c>k)
        {
            for(int i=n; i>0; )
            {
                arr[i]= (-i);
                c--;
                i = i-2;
                if(c==k)
                {
                    break;
                }
            }
        }
        if(c<k)
        {
           for(int i=n-1; i>0; )
            {
                arr[i]= (i);
                c++;
                i = i-2;
                if(c==k)
                {
                    break;
                }
            }
        }
       

    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    t--;
    }
    return 0;
}


