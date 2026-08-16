#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if(a+b==c || a+c==b||a+c==b||b+c==a||a+c==b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}