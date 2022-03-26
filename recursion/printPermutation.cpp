#include <bits/stdc++.h>
using namespace std;

void printPermutations(string s, string output = ""){
    if(s[0] == '\0'){
        cout << output << endl;
        return;
    }
    for(int i = 0; i <= output.size(); i++){
        printPermutations(s.substr(1), output.substr(0,i) + s[0] + output.substr(i));
    }
    return;
}



int main(){
    string s;
    cin >> s;
    printPermutations(s);
}


