#include <bits/stdc++.h>
using namespace std;

int length(char s[]){
    int len = 0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}

bool isPalidrome(char s[]){
    if(s[0] == '\0'){
        return true;
    }
    int len = length(s);
    if(s[0] == s[len - 1]){
        s[len - 1] = '\0';
        return true && isPalidrome(s+1);
    }
    return false;
}

int main(){
    char s[50];
    cin >> s;

    if(isPalidrome(s)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}
