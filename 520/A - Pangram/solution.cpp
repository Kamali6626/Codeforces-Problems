#include <iostream>
#include <cctype>
using namespace std;
 
int main() {
 
    int size;
    cin>>size;
 
    string word;
    cin>>word;
 
    bool alpha[26] = {false};
 
    for(int i = 0; i < word.length(); i++) {
 
        char ch = tolower(word[i]);
 
        if(ch >= 'a' && ch <= 'z') {
            alpha[ch - 'a'] = true;
        }
    }
 
    bool check = true;
 
    for(int i = 0; i < 26; i++) {
 
        if(alpha[i] == false) {
            check =false;
            break;
        }
    }
 
    if(check)
        cout<<"YES";
    else
        cout<<"NO";
        return 0;
}