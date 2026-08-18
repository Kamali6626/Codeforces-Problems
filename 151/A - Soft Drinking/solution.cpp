#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int toasts=drink/nl;
    int limes=c*d;
    int salt=p/np;
    int ans=min({toasts,limes,salt})/n;
    
cout<<ans;
    return 0;
}