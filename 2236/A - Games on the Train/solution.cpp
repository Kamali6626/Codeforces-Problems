#include <iostream>
#include <climits>
using namespace std;
int main() {
    int test;
    cin >> test;
    for(int t=0; t<test; t++) {
        int n;
        cin>>n;
        int arr[n];
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i]>max){
            max=arr[i];
            }
            if(arr[i]<min){
            min=arr[i];
        }
        }
        int result=max-min+1;
        cout<<result<<endl;
    }
    
    return 0;
}