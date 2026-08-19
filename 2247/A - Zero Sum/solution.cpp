#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        int minus_count = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >>a;
            if(a== -1) {
                minus_count++;
            }
        }
        
        if (n % 2 != 0) {
            cout<<"NO"<<endl;
        } 
 
        else if(n % 4 == 0) {
            if(minus_count % 2 == 0) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        } 
        else {
            if(minus_count % 2 != 0) {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
 
    return 0;
}