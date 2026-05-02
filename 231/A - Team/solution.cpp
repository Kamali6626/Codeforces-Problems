#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    int count = 0;
 
    for(int i = 0; i < n; i++){
        int one, two, three;
        cin>>one>>two>>three;
 
        if(one + two + three >= 2){
            count++;
        }
    }
 
    cout<<count;
 
    return 0;
}