// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    
    long long t;
    cin >> t;
 
    while(t--) {
        long long a, b;
        cin>>a>>b;
 
        if(a % b == 0)
            cout<<0<<endl;
        else
            cout<<b -(a % b)<<endl;
    }
 
    
    return 0;
}