// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n=1,m;
    m=t*t;
   for(int i=0;i<(t*t)/2;i++){
       cout<<n<<"	"<<m<<endl;
       n++;
       m--;
   }
 
    return 0;
}