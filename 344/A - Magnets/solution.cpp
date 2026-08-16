// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    string prev,curr;
    cin>>prev;
    int group =1;
    for(int i=1;i<t;i++){
        cin>>curr;
        if(prev != curr){
            group++;
        }
        prev=curr;
    }
   cout<<group;
 
    return 0;
}