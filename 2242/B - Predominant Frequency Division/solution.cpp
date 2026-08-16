#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        vector<int> a(n + 1);
        vector<int> pref1(n + 1, 0);
        vector<int> pref2(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
 
            pref1[i] = pref1[i - 1];
            pref2[i] = pref2[i - 1];
 
            if (a[i] == 1) {
                pref1[i]++;
                pref2[i]++;
            }
            else if (a[i] == 2) {
                pref1[i]--;
                pref2[i]++;
            }
            else {
                pref1[i]--;
                pref2[i]--;
            }
        }
 
        vector<int> mx(n + 2, -1000000000);
 
        
        for (int i = n - 1; i >= 1; i--) {
            mx[i] = max(mx[i + 1], pref2[i]);
        }
 
        bool ok = false;
 
        
        for (int i = 1; i <= n - 2; i++) {
 
            if (pref1[i] >= 0 && mx[i + 1] >= pref2[i]) {
                ok = true;
                break;
            }
        }
 
        cout << (ok ? "YES
" : "NO
");
    }
 
    return 0;
}