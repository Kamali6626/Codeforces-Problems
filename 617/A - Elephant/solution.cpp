#include <iostream>
using namespace std;
 
int main() {
    int x;
    cin>>x;
   int elephant=0,steps=0;
    while(x>elephant) {
        elephant +=5;
        steps++;
    }
    cout<<steps;
    return 0;
}