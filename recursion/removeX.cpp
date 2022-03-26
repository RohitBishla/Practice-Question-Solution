#include <bits/stdc++.h>
using namespace std;

void removeX(char s[]){
    if(s[0] == '\0'){
        return;
    }
    if(s[0] == 'x'){
        int i = 0;
        while(s[i] != '\0'){
            s[i] = s[i + 1];
            i++;
        }
        removeX(s);
    }
    else{
        removeX(s+1);
    }
    return;
}


int main(){
    char s[1000];
    cin >> s;
    removeX(s);
    cout << s << endl;
    return 0;
}
