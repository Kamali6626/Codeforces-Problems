#include<iostream>
using namespace std;
 
const long long MOD = 998244353;
 
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while(exp > 0) {
        if(exp & 1) {
        result = result * base % mod;
        }
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, m, r, c;
        cin>>n>>m>>r>>c;
        
        long long A, B;
        if(n >= r){
        A = r - 1;
        }
        else{
        A = n;
        }    
        if (m >= c){
        B = c - 1;
        }
        else {
            B = m;
        }
        
        long long p1 = MOD - 1;
        long long Am = (A % p1) * (m % p1) % p1;
        long long nB = (n % p1) * (B % p1) % p1;
        long long AB = (A % p1) * (B % p1) % p1;
        long long e = (Am + nB - AB + 2 * p1) % p1;
        
        cout<<power(2, e, MOD)<<endl;
    }
    return 0;
}