// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    int ans[s1.length()];
    
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
           ans[i]=stoi("0");
        }
        else{
            ans[i]=stoi("1");
        }
    }
    for(int i=0;i<s1.length();i++){
    cout<<ans[i];
}
    return 0;
}