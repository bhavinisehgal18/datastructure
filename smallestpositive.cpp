#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int m;      
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(m==a[i])
            {
                m++;
            }
        }
        cout<<m;
        cout<<endl;
    }
    return 0;
}
