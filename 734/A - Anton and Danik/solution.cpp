#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    char s;
    int size,countA=0,countD=0;
    cin>>size;
    while(size--){
        cin>>s;
        if(s=='A'){
            countA++;
        }
        else{
            countD++;
        }
    }
if(countA>countD){
    cout<<"Anton";
}
else if(countD>countA){
    cout<<"Danik";
}
else if (countD==countA){
    cout<<"Friendship";
}
    return 0;
}