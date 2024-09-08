#include<bits/stdc++.h>
using namespace std;
//cac thuat toan sap xep va tim kiem 
// 1: sap xep chon(Selection sort ) :
//tu tuong cua thuat toan : o moi buoc cua thuat toan luon dua phan tu nho nhat dua ve dau day de sap xep co n phan tu can thuc hien n - 1 buoc
// do phuc tap : O(n^2)

//sap xep chen :
void insertionSort{
    for (int i = 1; i < n; i ++){
        int key = arr[i];
        int j = i - 1;
        //Tim vi tri chen phan tu key
        while (j >= 0 && arr[j] < key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
}