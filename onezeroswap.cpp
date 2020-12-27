#include <iostream>
#include <string>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--)
    {
        int n; 
        cin>>n;
        string s, p;
        cin>>s;
        cin>>p;
        int zero=0;
        int one=0;
        for(int i =0; i<n; i++)
        {
            if(s[i]!=p[i])
            {
                if(s[i]=='0')
                {
                zero++;
                }
                else 
                {
                one++;
                }
            }            
        }
        if(zero!=one)
        {
            cout<<"No"<<endl;
            continue;
        }
        int cone=0;
        int ans=1;
        for(int i =0; i<n; i++)
        {
            if(s[i]!=p[i])
            {
                if(s[i]=='0')
                {
                    if(cone>0)
                    {
                      cone--;
                    }
                    else
                    {
                       ans = 0;
                       break;
                    }  
                }
                else
                {               
                   cone++;
                }
                
            }
            
        }
    if(ans==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
	}
	return 0;
}
