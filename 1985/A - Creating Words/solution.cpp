#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int size;
    string a,b;
    char ch;
 
    cin>>size;
while(size--){
    cin>>a>>b;
    
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
}
    return 0;
}