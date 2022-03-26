#include <bits/stdc++.h>
using namespace std;

int helper(int input[], int start, int end, int element){
    if(start > end){
        return -1;
    }
    int mid = (start + end)/2;
    if(input[mid] == element){
        return mid;
    }
    else if(input[mid] < element){
        return helper(input, mid + 1, end, element);
    }
    else{
        return helper(input, start, mid - 1, element);
    }
    return -1;
}


int binarySearch(int input[], int len, int element){
    return helper(input, 0, len - 1, element);
}

int main(){
    int input[1000], len, element;
    cin >> len;
    for(int i = 0; i < len; i++){
        cin >> input[i];
    }
    cin >> element;
    cout << binarySearch(input, len, element) << endl;
    return 0;
}
