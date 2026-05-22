// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    int count=0;
    for(int i=0;i<s1.length();i++){
        bool same=false;
        for(int j=0;j<i;j++){
            if(s1[i]==s1[j]){
                same=true;
            }
        }
       if(same ==false){
           count++;
       }
    }
    if(count%2==0){
     cout<<"CHAT WITH HER!";
    }
    else{
     cout<<"IGNORE HIM!";
    }
   
    
    return 0;
}