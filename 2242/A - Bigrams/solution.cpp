#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--) {
        int k;
        cin>>k;
 
        int two = 0;
        bool ok = false;
 
        for(int i = 0; i < k; i++) {
            int x;
            cin>>x;
 
            if(x >= 3)
                ok = true;
            if(x == 2)
                two++;
        }
 
        if(ok ||two >= 2)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
 
    return 0;
}