#include <bits/stdc++.h>
using namespace std;

void pairStar(char s[]){
    if(strlen(s) <= 1){
        return;
    }
    if(s[0] == s[1]){
        for(int i = strlen(s) + 1; i > 1; i--){
            s[i] = s[i-1];
        }
        s[1] = '*';
    }
    pairStar(s+1);
    return;
}


int main(){
    char input[100];
    cin >> input;
    pairStar(input);
    cout << input << endl;
    return 0;
}
