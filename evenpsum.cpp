#include <iostream>
using namespace std;

int main() {
    int T;
	int A;
    int B;
    cin>>T;
    
    int ans;
    
    while(T !=0)
    {
    cin>>A>>B;
    if(A%2==0 || B%2==0)
    {
        ans= ((A * B)/2);
    }
    else
    {
        ans = ((A * B)/2) + 1;
    }
    
    cout<< ans;
    T--;
    }
	return 0;
}
