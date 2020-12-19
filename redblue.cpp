#include <bits/stdc++.h> 
using namespace std; 
int main() 
{  
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    string R,B;
    cin>>R>>B;
    int red=0,blue=0;
    
    while(n--)
    {
        if(R[n]>B[n])
        {
            red++;
        }
        else if(B[n]>R[n])
        {
            blue++;
        }
    }
    if(red>blue)
    {
        cout<<"RED"<<endl;
    }
    else if(blue>red)
    {
        cout<<"BLUE"<<endl;
    }
    else
    {
        cout<<"EQUAL"<<endl;
    }
    
    }   
    return 0; 
} 
