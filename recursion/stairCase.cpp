#include <bits/stdc++.h>
using namespace std;

int staircase(int n){
    if(n<0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    int total = staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
    return total;
}


int main(){
    int n;
    cin >> n;
    cout << staircase(n) << endl;
    return 0;
}
