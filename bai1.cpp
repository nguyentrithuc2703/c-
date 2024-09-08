#include<bits/stdc++.h>

using namespace std;

#define ll long long

// dem so thao tac 

// cho so nguyen duong N.ban duoc thuc hien 3 thao tac sau day :
//1:Lay N chia het 2 neu N chia het cho 2
//2:Lay N chia het 3 neu N chia het cho 3
//3:Giam N di mot don vi 
//->:Hay Dem So Thao Tac It Nhat De Bien Doi N ve 1
int min3(int a, int b, int c) {
   return min(min(a, b), c);
}


int dq(int n){
	if(n == 1){
		return 0;
	}
	int res1 = 1e9, res2 = 1e9, res3 = 1e9;
	if(n % 2 == 0){
		res1 = 1 + dq(n / 2);
	}
	if(n % 3 == 0){
		res2 = 1 + dq(n / 3);
	}
	if(n > 1){
		res3 = 1 +dq(n - 1);
	}
	min3(res1, res2, res3);
}

int main(){
	ll n;
	cin >> n;
	cout << dq(n) << endl;
}










































//LUY THUA NHI PHAN 
//const int mod = 1000000007;
//
//long long  binpow(long long a , long long  b){
//	if(b == 0){
//		return 1;
//	}
//	long long x = binpow(a, b / 2);
//	if(b % 2 == 0){
//		return (x % mod) *(x % mod) % mod;
//	} 
//	else{
//		return (x % mod) * (x % mod) % mod * ( a % mod) % mod;
//	}
//}
//int main(){
//	cout << binpow(2, 10000000000000000) << endl;
//	return 0;
//}


////chuyen he thap phan sang he nhi phan 
//
//void dq(int n){
//	if(n != 0){
//		dq(n / 2);
//		cout << n % 2;
//	}
//}

////chuyen he thap phan sang he 16
//
//void dq(int n){
//	if(n != 0){
//		dq(n / 16);
//		int r = n % 16;
//		if(r < 10) cout << r;
//		else
//			cout << (char)(r + 55);
//	}
//}

//// in ra cac so nguyen 
//
////in ra tu phai sang trai
//void dq(ll n){
//	if(n < 10){
//		cout << n;
//	}
//	else{
//		cout << n % 10 <<  ' ';
//		dq(n / 10);
//	}
//}  
//
////in ra tu trai sang phai
//
//void dq2(ll n){
//	if(n < 10){
//		cout << n << ' ';
//	}
//	else{
//		dq2(n / 10);
//		cout << n % 10 << ' ';
//	}
//}

//// dem so thao tac 
//
//// cho so nguyen duong N.ban duoc thuc hien 3 thao tac sau day :
////1:Lay N chia het 2 neu N chia het cho 2
////2:Lay N chia het 3 neu N chia het cho 3
////3:Giam N di mot don vi 
////->:Hay Dem So Thao Tac It Nhat De Bien Doi N ve 1
//int min3(int a, int b, int c) {
//    return min(min(a, b), c);
//}
//
//
//int dq(int n){
//	if(n == 1){
//		return 0;
//	}
//	int res1 = 1e9, res2 = 1e9, res3 = 1e9;
//	if(n % 2 == 0){
//		res1 = 1 + dq(n / 2);
//	}
//	if(n % 3 == 0){
//		res2 = 1 + dq(n / 3);
//	}
//	if(n > 1){
//		res3 = 1 +dq(n - 1);
//	}
//	min3(res1, res2, res3);
//}
