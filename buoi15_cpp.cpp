#include<bits/stdc++.h>

using namespace std;

// Thuat Toan Tim Kiem :
/*
1 : Tim kiem tuyen tinh : O(N)
bool linearSearch(int a[n], int n, int x){
	for(int i = 0; i < n; i ++){
		if(x == a[i]) return true;
	}
	return false;
}
2 : Tim kiem nhi phan : O(log2N)
bool binarySearch(int a[n], int n, int x){
	int left = 0, right = n - 1;
	while(left <= right){
	int mid = (left + right) / 2;
	if(a[mid] == x) return true;
	else if(a[mid] < x) left = mid + 1;// Tim kiem o ben phai
	else right = mid - 1;// Tim kiem o ben trai
	}
	return false;
}
Trong thu vien algorithm cung co  ham binarySearch co san : Cach khai bao nhu khai bao nhu ham sort
Neu nhu ben su dung vector thi binarySearch(a.begin(), a.end(),Gia tri can tim kiem trong mang)
Bien the cua thuat toan  nhi phan :
1 : Tim vi tri xuat hien dau tien cua phan tu X trong mang tang dan! (OlogN)

int pos1(int a[n], int n, int x){
	int left = 0, right = n - 1;
	int res = -1;
	while(left < right){
	int mid = (left + right) / 2;
	if(a[mid] == x){
		res = mid;// ghi nhan ket qua
		right = mid - 1;// di tim ket qua tot hon neu co
	}
	else if(a[mid] < x){
		left = mid + 1;
	}
	else{
		right = mid - 1;
	}

	}
	return res;
}
2 : Tim vi tri xuat hien cuoi cung cua phan tu X trong mang tang dan !(OlogN)
int pos2(int a[n], int n, int x){
	int left = 0, right = n - 1;
	int res = -1;
	while(left < right){
	int mid = (left + right) / 2;
	if(a[mid] == x){
		res = mid;// ghi nhan ket qua
		left = mid + 1;// di tim ket qua tot hon neu co
	}
	else if(a[mid] < x){
		left = mid + 1;
	}
	else{
		right = mid - 1;
	}
	}
	return res;
}
// lower_bound, upper_bound : Ap dung( vector) cho mang da duoc sap xep tang dan 
Cu Phap cua lower_bound(>= X) : + lower_bound(a, a + n, x)
						+ lower_bound(a.begin(), a.end(), x)

Cu Phap cua upper_bound(> X) : + upper_bound(a, a + n, x)
KIEN THUC TIEP THEO VE SET :Set, Multiset, Unordered_set !
1,Set : 
*/

int pos1(int a[], int n, int x){
	int left = 0, right = n - 1;
	int res = -1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			res = mid;// Ghi Nhan Ket Qua
			right = mid -1;// ghi nhan ket qua tot hon neu co 
		}
		else if(a[mid] < x){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return res;
}

int pos2(int a[], int n, int x){
	int left = 0, right = n - 1;
    int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x){
            res = mid;// Ghi Nhan Ket Qua
            left = mid + 1; // ghi nhan ket qua tot hon neu co 
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return res;
}

int main(){
	int n, y;
	cin >> n >> y;
	int a[n];
	for(int & x : a){
		cin >> x;
	}
	cout << pos2(a, n, y) << ' ';
	return 0;
}