#include <bits/stdc++.h>
using namespace std;

void printKeypad(int n, string s = ""){
    if(n == 0){
        cout << s << endl;
        return;
    }
    string keyboard[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string value = keyboard[n%10];
    n/=10;
    for(int i = 0; i < value.size(); i++){
        printKeypad(n, value[i] + s);
    }
    return;
}


int main(){
    int n;
    cin >> n;
    printKeypad(n);
    return 0;
}
