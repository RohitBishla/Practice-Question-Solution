#include <bits/stdc++.h>
using namespace std;

void printSubsetSumToK(int * arr, int size, int k, string output = ""){
    if(size == 0){
        if(k == 0){
            cout << output << endl;
        }
        return;
    }
    printSubsetSumToK(arr + 1, size - 1, k - arr[0], output + to_string(arr[0]) + " ");
    printSubsetSumToK(arr + 1, size - 1, k, output);
    return;
}



int main(){
    int size;
    cin >> size;
    int * arr = new int[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    printSubsetSumToK(arr, size, k);
    return 0;
}
