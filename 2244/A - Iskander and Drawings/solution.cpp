#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
 
        cin >> n;
        cin >> s;
 
        int cnt = 0;
        int mx = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                cnt++;
            } 
            else {
                mx = max(mx, (cnt + 1) / 2);
                cnt = 0;
            }
        }
        mx = max(mx, (cnt + 1) / 2);
 
        cout << mx << endl;
    }
 
    return 0;
}