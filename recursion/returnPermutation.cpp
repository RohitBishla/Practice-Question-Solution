
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int returnPermutations(string s, string output[]){
    if(s[0] == '\0'){
        output[0] = "";
        return 1;
    }
    string output1[10000];
    int count = returnPermutations(s.substr(1), output1);
    int index = 0;
    for(int i = 0; i < count; i++){
        string main = output1[i];
        int size = main.size();
        for(int j = 0; j <= size; j++){
            output[index] = main.substr(0,j) + s[0] + main.substr(j);
            index++;
        }
    }
    return index;
}


int main(){
    string s;
    cin >> s;
    string output[1000];
    int count = returnPermutations(s, output);
    for(int i = 0; i < count; i++){
        cout << output[i] << endl;
    }
    return 0;
}
