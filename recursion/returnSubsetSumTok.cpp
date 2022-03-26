#include <bits/stdc++.h>
using namespace std;


int subsetSumToK(int * arr, int n, int output[][50], int k){
    if(n == 0){
        if(k == 0){
            output[0][0] = 0;
            return 1;
        }
        return 0;
    }
    int output1[1000][50];
    int output2[1000][50];
    int a = subsetSumToK(arr + 1, n - 1, output1, k - arr[0]);
    int b = subsetSumToK(arr + 1, n - 1, output2, k);
    for(int i = 0; i < a; i++){
        int size = output1[i][0];
        output[i][0] = size + 1;
        output[i][1] = arr[0];
        for(int j = 2; j <= size + 1; j++){
            output[i][j] = output1[i][j - 1];
        }
    }
    for(int i = 0; i < b; i++){
        output[i+a][0] = output2[i][0];
        for(int j = 1; j <= output2[i][0]; j++){
            output[i+a][j] = output2[i][j];
        }
    }
    return a + b;
}




int main(){
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int output[1000][50];
    int size = subsetSumToK(arr, n, output, k);
    for(int i = 0; i < size; i++){
        for(int j = 1; j <= output[i][0]; j++){
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
