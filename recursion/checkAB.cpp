#include <bits/stdc++.h>
using namespace std;

bool checkAB(char s[]){
    if(s[0] == '\0'){
        return true;
    }
    if(s[0] == 'a'){
        if(s[1] == '\0'){
            return true;
        }
        else if( s[1] == 'a'){
            return checkAB(s+1);
        }
        else if(s[1] == 'b' && s[2] == 'b'){
            return checkAB(s+3);
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}


int main(){
    char input[100];
    cin >> input;
    if(checkAB(input)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}

