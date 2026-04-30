#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string str;
        cin >> str;
        if(str.length()>10){
        cout << str[0]<<str.length()-2<<str[str.length()-1]<<'
';
    }
    else{
        cout << str << '
';
    }
    }
}