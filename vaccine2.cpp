#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n,d;
    
      
while(t!=0)
  {	 
     cin>>n>>d;
     int temp;
     int r=0;
     int nr=0;
     
    for(int i=0; i<n; i++)
    {
       cin>>temp;
       if(temp>=80 || temp<=9)
         {
            r++;
         }
        else
         {
           nr++;
         }
    }
    
    //cout<<r<<" "<<nr<<endl;
    int day=0;
      if((nr%d)!=0)
      {
        day=day+(nr/d)+1;
      }
      else
      {
        day=day+(nr/d);
      }
      if((r%d)!=0)
      {
        day=day+(r/d)+1;
      }
      else
      {
        day=day+(r/d);
      }
     cout<<day<<endl;
      t--;
    }
	return 0;
}
