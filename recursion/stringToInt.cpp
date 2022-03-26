#include <bits/stdc++.h>
using namespace std;

int stringToNumber(char s[]){
    if(strlen(s) == 0){
        return 0;
    }
    int ans = stringToNumber(s+1);
    int a = int(s[0]) - 48;
    return ans + a*(pow(10,strlen(s)-1));
}
    


int main(){
    char s[50];
    cin >> s;
    int ans = stringToNumber(s);
    cout << ans << endl;
    return 0;
}
