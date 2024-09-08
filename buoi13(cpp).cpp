#include <bits/stdc++.h>

using namespace std;

using ll = long long;
//cho mang so nguyen A gom n phan tu : Hay liet ke theo thu tu xuat hien cac so thoa man co it nhat mot so trai dau voi no dung canh no 

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a){
    	cin >> x;
	}
    for(int i = 0; i < n; i++){ 
        if(i == 0){
            if(1ll * a[0] * a[1] < 0){
                cout << a[0] << ' ';
            }
        }
        else if(i == n - 1){
            if(1ll * a[n-1] * a[n-2] < 0){ 
                cout << a[n-1] << ' ';
            }
        }
        else{
            if(1ll * a[i] * a[i-1] < 0 ||  1ll * a[i] * a[i+1] < 0){
                cout << a[i] << ' ';
            }
        }
    }
    return 0;
}

/*
//liet ke va dem cac so fibonacii :

long long Fibo[100];

//F[i] : luu so fibonacci thu i :

void ktao(){
	Fibo[0] = 0;
	Fibo[1] = 1;
	
	for(int i = 2; i <= 92; i ++){
		Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
	}
	
}

bool check(long long n){
	for(int i = 0; i <= 92; i++){
		if(n == Fibo[i]){
			return true;
		}
	}
	return false;
}

int main(){
	ktao();
	bool ok = false;
	int n; cin >> n;
	
	for(int i = 0; i < n; i ++){
		long long x;
		cin >> x;
		if(check(x)){
			cout << x << ' ';
			ok = true; // danh dau 
		}
	}
	
	if(!ok){
		cout << " NONE \n";
	}
}
*/













/*
// cho mang so nguyen n .hay liet ke cac chi so i trong mang thoa man : tong cac phan tu ben trai i va tong cac phan thu ben phai i la cac so nguyen to 

bool nt(int n){
    for (int i = 0; i <= sqrt(n); i++){
        if(n % 2 == 0){
            return false;
        }
    }
    return n > 1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt[10005] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        // xet chi so i 
        long long left = 0, right = 0;
        for(int j = 0; j < i; j++){
            left += a[j];
        }
        for(int j = i + 1; j < n; j++){
            right += a[j];
        }
        if(nt(left) && nt(right)){
            cout << i << " ";  // chi so i thoa man
        }
    }
    return 0;
}
*/


/*
//cho mang so nguyen A gom n phan tu : Hay liet ke theo thu tu xuat hien cac so thoa man co it nhat mot so trai dau voi no dung canh no 

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a){
    	cin >> x;
	}
    for(int i = 0; i < n; i++){ 
        if(i == 0){
            if(1ll * a[0] * a[1] < 0){
                cout << a[0] << ' ';
            }
        }
        else if(i == n - 1){
            if(1ll * a[n-1] * a[n-2] < 0){
                cout << a[n-1] << ' ';
            }
        }
        else{
            if(1ll * a[i] * a[i-1] < 0 ||  1ll * a[i] * a[i+1] < 0){
                cout << a[i] << ' ';
            }
        }
    }
    return 0;
}
*/