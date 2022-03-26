#include <bits/stdc++.h>
using namespace std;

int pivit(int * arr, int start, int end){
    int pivit_value = arr[start];
    int pivit_index = start;
    for(int i = start + 1; i <= end; i++){
        if(arr[i] <= pivit_value){
            pivit_index++;
        }
    }
    arr[start] = arr[pivit_index];
    arr[pivit_index] = pivit_value;
    int i = start;
    int j = end;
    while(i < pivit_index && j > pivit_index){
        if(arr[i] <= pivit_value){
            i++;
        }
        else if(arr[j] > pivit_value){
            j--;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pivit_index;
}



void quickSortHelper(int * arr, int start, int end){
    if(start >= end || start < 0){
        return;
    }
    int index = pivit(arr, start, end);
    quickSortHelper(arr, start, index - 1);
    quickSortHelper(arr, index + 1, end);
    return;
}

void quickSort(int * arr, int size){
    quickSortHelper(arr, 0, size - 1);
    return;
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
