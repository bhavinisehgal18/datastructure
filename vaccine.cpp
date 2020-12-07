#include <iostream>
using namespace std;

int main() {
	int D1,V1,D2,V2,P;
    cin>>D1>>V1>>D2>>V2>>P;
    int x=0;
    int sum=0;
    while(sum<P)
    {
        x++;
        if(x>=D1){
            sum+=V1;
        }
        if(x>=D2){
            sum+=V2;
        }
    }
    
    cout<<x<<endl;
	return 0;
}
