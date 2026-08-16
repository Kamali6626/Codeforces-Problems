#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
int a,b;
int count=0;
while(n--){
    cin>>a>>b;
    if(b-a>=2)
    count++;
}
cout<<count;
    return 0;
}