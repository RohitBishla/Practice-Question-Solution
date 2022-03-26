#include <bits/stdc++.h>
using namespace std;

void printAllPossibleCodes(string s, string output = ""){
    if(s[0] == '\0'){
        cout << output << endl;
        return;
    }
    int first = s[0] - '0';
    char firstchar = 'a' + first - 1;
    printAllPossibleCodes(s.substr(1), output + firstchar);
    if(s[1] != '\0'){
        int second = first *10 + int(s[1] - '0');
        if(second <= 26){
            char secondchar = 'a' + second - 1;
            printAllPossibleCodes(s.substr(2), output + secondchar);
        }
    }
    return;
}




int main(){
    string s;
    cin >> s;
    printAllPossibleCodes(s);
}

