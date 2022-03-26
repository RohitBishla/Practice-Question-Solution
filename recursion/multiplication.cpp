#include <bits/stdc++.h>
using namespace std;

int multiplyNumbers(int m, int n){
    if(m == 1){
        return n;
    }
    return multiplyNumbers(m - 1, n) + n;
}


int main(){
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
    return 0;
}
