#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int size;
    string s = "codeforces";
    char ch;
 
    cin>>size;
 
    while(size--) {
        cin>>ch;
 
        bool found = false;
 
        for(int i = 0; i < s.length(); i++) {
            if(ch == s[i]) {
                found = true;
                break;
            }
        }
 
        if(found){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}