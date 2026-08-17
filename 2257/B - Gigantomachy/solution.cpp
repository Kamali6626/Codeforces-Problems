#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin>> n >> m;
 
        int a[100];
        int b[100];
 
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
 
        for(int i = 0; i < m; i++) {
            cin>>b[i];
        }
 
        long long bea = a[0] + n - 1;
        long long ver = b[0] + m - 1;
 
        if(bea >= ver)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
 
    return 0;
}