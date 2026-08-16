#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
    string s1, s2, s3;
 
    cin>>s1>>s2>>s3;
 
    string combined = s1 + s2;
    
    sort(combined.begin(), combined.end());
    sort(s3.begin(), s3.end());
    if(combined == s3) {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 
    return 0;
}