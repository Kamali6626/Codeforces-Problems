#include <iostream>
using namespace std;
 
int main() {
    int k,n,w;
    int sum=0,total=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        sum+=i*k;
    }
    total=sum-n;
    
    if(total>0){
    cout<<total;
    }else{
       cout<<0; 
    }
    
    return 0;
}