#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int test;
    cin>>test;
 
    while(test--) {
        long long n, k;
        cin>>n>>k;
 
        long long min_num = min(n, k);
        long long ans = min_num;
        long long rem = n - min_num;
        long long cost = 2;
 
        while(rem>=cost) {
            long long take = min(min_num, rem / cost);
            ans += take;
            rem -= take*cost;
            cost *= 2;
        }
 
        cout<<ans<<endl;
    }
 
    return 0;
}