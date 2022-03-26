 #include <bits/stdc++.h>
using namespace std;

void merge(int * arr, int start, int end){
    int mid = (start + end)/2;
    int * temp = new int[end - start + 1];
    int i = start, j = mid + 1;
    int k = 0;
    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j <= end){
        temp[k] = arr[j];
        j++;
        k++;
    }
    k = 0;
    i = start;
    while(i <= end){
        arr[i] = temp[k];
        i++;
        k++;
    }
    return;
}



void mergeSortHelper(int * arr, int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start + end)/2;
    mergeSortHelper(arr, start, mid);
    mergeSortHelper(arr, mid + 1, end);
    merge(arr, start, end);
    return;
}

void mergeSort(int * arr, int size){
    mergeSortHelper(arr, 0, size - 1);
    return;
}

int main(){
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
