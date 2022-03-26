#include <bits/stdc++.h>
using namespace std;

int subset(int input[], int size, int output[][20]){
    if(size == 0){
        output[0][0] = 0;
        return 1;
    }
    int ans = subset(input + 1, size - 1, output);
    for(int i = 0; i < ans; i++){
        int temp = output[i][0];
        output[i+ans][0] = temp + 1;
        for(int j = 1; j <= temp; j++){
            output[i+ans][j+1] = output[i][j];
        }
        output[i+ans][1] = input[0];
    }
    return 2*ans;
}



int main(){
    int input[20], size, output[1000][20];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> input[i];
    }
    int ans = subset(input, size, output);
    for(int i = 0; i < ans; i++){
        for(int j = 1; j <= output[i][0]; j++){
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
