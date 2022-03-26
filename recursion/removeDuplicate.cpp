#include <bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char * s){
    if(s[0] == '\0'){
        return;
    }
    if(s[0] == s[1]){
        int i = 1;
        while(s[i] != '\0'){
            s[i - 1] = s[i];
            i++;
        }
        s[i-1] = '\0';
        removeConsecutiveDuplicates(s);
    }
    else{
        removeConsecutiveDuplicates(s + 1);
    }
    return;
}


int main(){
    char s[1000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
