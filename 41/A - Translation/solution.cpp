#include <iostream>
#include <string>
using namespace std;
int main() {
    string first,seconde,reverse;
    cin>>first>>seconde;
 
    for(int i=seconde.length()-1;i>=0;i--){
        reverse=reverse+seconde[i];
    }
    if(first==reverse){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}