// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    
    int t;
    cin >> t;
string s1="I hate",s2="I love";
 
for(int i=1;i<=t;i++){
    if(i%2 !=0){
        cout<<s1;
    }else{
        cout<<s2;
    }
    if(i !=t){
        cout<<" that ";
    }
    else{
        cout<<" it ";
    }
}
 
   
    
    return 0;
}