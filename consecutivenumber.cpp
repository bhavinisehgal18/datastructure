#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n,j,m;
        int count = 0;
        int min;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        min=a[0];
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]<a[i])
            {
                min=a[i+1];
            }
        }
        for(int i=0;i<n-1;i++)
        {
           j=i+1;
           if((a[j]-a[i])==1)
           {
              count++;
              m=i+1;
             
           }
        }

        if(count==0)
        {
           cout<<"Smallest subset in array: "<<min;
        }
        else
        {
            for(int i=0;i<count+1;i++)
            {
                cout<<a[m-count+i];
            }
        }
        cout<<endl;

    }
    return 0;
}
