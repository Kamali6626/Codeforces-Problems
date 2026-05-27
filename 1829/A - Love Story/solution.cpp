#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int size;
    string a;
    string s="codeforces";
    
int i=0,count=0;
    cin>>size;
while(size--){
    cin>>a;
     count=0;
    for(int i=0;i<a.length();i++){
        if(a[i] !=s[i]){
            count++;
        }
    }
  
cout<<count<<endl;
}
    return 0;
}