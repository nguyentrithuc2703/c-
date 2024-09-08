#include <bits/stdc++.h>

using namespace std;

using ll = long long;

// sang so nguyen to : Dung ki thuat mang danh dau 

bool prime[1000001];

void sang(){
	//Buoc 1: coi tat ca cac so tu i den n deu la so nguyen to 
	for(int i = 0; i <= 1000000; i ++){
		prime[i] = true;
	}
	//Buoc 2:Sang so nguyen to :
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 1000000; j += i){
				prime[j] = false;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	sang();
	for(int i = 0; i <= n; i ++){
		if(prime[i]){
			cout << i << endl;
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
//chen 1 so so vao mang bat ki 
int main(){
	int n, x, k;
	cin >> n >> x >> k;
	int a[n + 5];
	for(int &x : a){
		cin >> x;
	}
	--k;
	for(int i = n - 1; i >= k; i--){
		a[i + 1] = a[i];
	}
	a[k] = x;
	++n;
	for(int i= 0; i < n; i ++){
		cout << a[i] << ' ';
	}
}
*/

/*
do phuc tap : O(NloglogN)
// sang so nguyen to : Dung ki thuat mang danh dau 

bool prime[1000001];

void sang(){
	//Buoc 1: coi tat ca cac so tu i den n deu la so nguyen to 
	for(int i = 0; i <= 1000000; i ++){
		prime[i] = true;
	}
	//Buoc 2:Sang so nguyen to :
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 1000000; j += i){
				prime[j] = false;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	sang();
	for(int i = 0; i <= n; i ++){
		if(prime[i]){
			cout << i << endl;
		}
	}
	return 0;
}
*/