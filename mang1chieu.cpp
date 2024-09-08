#include <bits/stdc++.h>

using namespace std;

// ly thuyet mang 1 chieu
// liet ke , dem cac phan tu trong mang thoa man tinh chat gi do :
//- chan
//- le
//- so am
//- so duong
//- so nguyen to
//- so hoan thien
//- so co tong cac chu so la so nguyen to
//- so co tong cac chu so la so hoan thien
//- so co tong cac chu so la so nguyen to va hoan thien
//- so co tong cac chu so la so nguyen to va chan
//- so co tong cac chu so la so nguyen to va le
//- so co tong cac chu so la so nguyen to va so am
//- so co tong cac chu so la so nguyen to va so duong
//- so co tong cac chu so la so nguyen to va so le
//- so co tong cac chu so la so nguyen to va so duong...
// khong duoc truy cap vao 1 chi so khong hop le trong mang
// khong khai bao duoc mang qua lon (<=10^7 phan tu )
// for each :2 cach
// cach 1 : for(int i = 0;i < n; i++){
//  cout << a[i] << ' ';
// }
// cach 2 : for(int iteam  : a){
//  cout << item <<'';
// }
// ham tinh tim max, min(nho phai co dau * dang truoc )
// cout << *max_element(a, a + n) << endl;
// cout << *min_element(a, a + n) << endl;
// 	int min_val = INT_MAX, max_val = INT_MIN;
//
//    for(int i=0; i<n; i++){
//        min_val = min(min_val, a[i]);
//        // if(min_val < a[i]){
//        //     min_val = a[i];
//        // }
//        max_val = max(max_val, a[i]);
//        // if(max_val > a[i]){
//        //     max_val = a[i];
//        // }
//    }
// xet hai cap :
// int n;
// cin >> n;
// int a[n];
// for(int i=0; i<n; i++){
//    cin >> a[i];
// }
// for(int i = 0; i < n; i ++){
// 	// xet a[i];
//     for(int j = i; j < n; j ++){
//         cout << a[i] << " " << a[j] << endl;
//     }
// }

// ki thuat mang danh dau : danh dau su xuat hien cua 1 gia tri nao do , dem tan suat xuat hien cua 1 gia tri nao do :(map)
//  dem xem moi phan tu trong mang xua hien bao nhieu lan
// chi ap dung mang danh dau khi cac phan tu trong mang khong am va nho hon 10^7 :
bool nt(long long n){
    for (int i = 0; i <= sqrt(n); i++){
        if (n % 2 == 0){
            return false;
        }
    }
    return n > 1;
}
int cnt[1000001];
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int x : a){
        cnt[x]++;
    }
    int max_val = *max_element(a, a + n);
    for (int i = 0; i <= max_val; i++){
        if (cnt[i] != 0){
            cout << i << " : " << cnt[i] << endl;
        }
    }
    return 0;
}
