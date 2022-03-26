#include <bits/stdc++.h>
using namespace std;

double geomatricSum(int k){
    if(k == 0){
        return 1;
    }
    return geomatricSum(k - 1) + double(1)/double(pow(2,k));
}


int main(){
    int n;
    cin >> n;
    cout << geomatricSum(n) << endl;
    return 0;
}
