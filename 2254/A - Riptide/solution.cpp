#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        
        int count = 0; 
        
        while(true) {
            
            if(a == b || b == c || a == c) {
                break;
            }
            
    
            if(a > b && a > c) {
                a--;
                if (b < c) b++;
                else c++;
            } 
            else if(b > a && b > c) {
                b--;
                if (a < c) a++;
                else c++;
            } 
            else{
                c--;
                if(a < b) {
                a++;
                }
                else b++;
            }
            
            count++; 
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}