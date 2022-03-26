#include <bits/stdc++.h>
using namespace std;

//strlen is from <cstring> library.
void replacePi(char s[]){
    int len = strlen(s);
    if(len <= 1){
        return;
    }

    if(s[0] == 'p' && s[1] == 'i'){
        s[0] = '3';
        s[1] = '.';
        s[len + 2] = '\0';
        for(int i = len + 1; i > 3; i--){
            s[i] = s[i-2];
        }
        s[2] = '1';
        s[3] = '4';
    }
    replacePi(s+1);
    return;
}

int main(){
    char s[10000];
    cin.getline(s, 10000);
    replacePi(s);
    cout << s << endl;
}
