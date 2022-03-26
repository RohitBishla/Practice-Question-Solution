#include <bits/stdc++.h>
using namespace std;

void printSubsetsOfArray(int * arr, int size, string s = ""){
    if(size == 0){
        cout << s << endl;
        return;
    }
    printSubsetsOfArray(arr + 1, size - 1, s);
    printSubsetsOfArray(arr + 1, size - 1, s + to_string(arr[0]) + " ");
    return;
}

int main(){
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printSubsetsOfArray(arr, n);
}
