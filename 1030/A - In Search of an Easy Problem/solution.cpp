// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int a;
bool check=false;
while(n--){
cin>>a;
if(a==1){
    check=true;
}
}
if(check){
    cout<<"HARD";
}else{
    cout<<"EASY";
}
    return 0;
}