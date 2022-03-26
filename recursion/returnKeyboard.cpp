#include <bits/stdc++.h>
using namespace std;

int keypad(int n, string output[]){
    if(n == 0){
        output[0] = "";
        return 1;
    }
    int count = keypad(n/10, output);
    string s[] = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int number = n%10;
    string newly = s[number];
    for(int i = newly.size() - 1; i >= 0; i--){
        char temp = newly[i];
        for(int j = count - 1; j >= 0; j--){
            output[count*i + j] = output[j] + temp;
        }
    }

    return count*newly.size();
}




int main(){
    int num;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
