#include <iostream>
using namespace std;
 
int main() {
    int n, h;
    cin >>n>>h;
 
    int width = 0;
 
   
    while(n--){
        int a;
        cin >>a;
 
        if(a > h)
            width += 2;
        else
            width += 1;
    }
 
    cout<<width;
 
    return 0;
}