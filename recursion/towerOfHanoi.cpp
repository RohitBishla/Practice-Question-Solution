#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination){
    if(n == 1){
        cout << source << " " << destination << endl;
        return;
    }
    if(n == 0){
        return;
    }
    towerOfHanoi(n - 1, source, destination, helper);
    cout << source << " " << destination << endl;
    towerOfHanoi(n - 1, helper, source, destination);
    return;
}


int main(){
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
