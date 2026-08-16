// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    int arr[t];
    int ans[t];
    for(int i=1;i<=t;i++){
        cin>>arr[i];
         ans[arr[i]]=i;
        
    }
    for(int i=1;i<=t;i++){
        cout<<ans[i]<<" ";
    }
 
 
    return 0;
}