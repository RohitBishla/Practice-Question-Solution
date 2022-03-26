#include <bits/stdc++.h>
using namespace std;

int getCodes(string s, string output[]){
    if(s[0] == '\0'){
        output[0] = "";
        return 1;
    }
    int first = s[0] - '0';
    string output1[10000];
    int a = getCodes(s.substr(1), output1);
    char firstchar = 'a' + first - 1;
    for(int i = 0; i < a; i++){
        output[i] = firstchar + output1[i];
    }
    int b = 0;
    if(s[1] != '\0'){
        int second = first*10 + int(s[1] - '0');
        if(second <= 26){
            char secondchar = 'a' + second - 1;
            string output2[10000];
            b = getCodes(s.substr(2), output2);
            for(int i = a; i < a + b; i++){
                output[i] = secondchar + output2[i - a];
            }
        }
    }
    return a + b;
}



int main(){
    string n;
    cin >> n;
    string output[10000];
    int count = getCodes(n, output);
    for(int i = 0; i < count; i++){
        cout << output[i] << endl;
    }
    return 0;
}
