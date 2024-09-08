#include<bits/stdc++.h>

using namespace std;

//ly thuyet dong du:
//khi tinh chia du => Neu xuat hien 1 so  o duoi mau => Tinh nghich dao modun
// so fibonacci
//do phuc tap cua vong for = so vong lap cua for * do phuc tap cua code ben trong vong for
int fb(int n){
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		return  fb(n - 1) + fb(n - 2);
	}
}
int main(){
	int n;
	cin >> n;
	cout << fb(n) << endl;
}



// //ly thuyet dong du:
// //khi tinh chia du => Neu xuat hien 1 so  o duoi mau => Tinh nghich dao modun

// ham kiem tra xem 1 so co phai la so fibonacci hay khong 
// bool fibo(long long n){
// 	if(n == 1 || n == 0){
// 		return true;
// 	}
// 	long long fn1 = 1, fn2 = 0;
// 	for(int i =3; i<= 93; i++){
// 		long long fn = fn1 + fn2;
// 		if(fn == n){
// 			return true;
// 		}
// 		fn2 = fn1;
// 		fn1 = fn;
// 	}
// 	return false;
// }

// so fibonacci : 0, 1, 1, 2, 3, 5, 8, 13, 21......
// -kiem tra 1 so co phai la so fibonacci hay khong ?
// -liet ke n so fibonacci dau tien
// -in ra so fibonacci

// bool fibo(long long n){
// 	if(n == 0 || n == 1){
// 		return true;
// 	}
// 	//sinh ra cac so fibonacci
// 	long long fn1 = 1, fn2 = 0, fn;
// 	for(int i = 3; i <= n; i++){
// 		 fn = fn1 + fn2;
// 		 cout << fn << endl;
// 		if(fn == n){
// 			return true;
// 		}
// 		fn2 = fn1;
// 		fn1 = fn;
// 	}
// 	return false;
// }

// ham in so fibonacci bat dau tu so 1 
// void fibo(int n){
// 	if(n == 1){
// 		cout <<"1 \n";
// 	}
// 	else if(n == 2){
// 		cout <<"1\n1\n";
// 	}
// 	else{
// 		cout <<"1\n1\n";
// 		long long fn1 = 1, fn2 = 1;
// 		for(int i = 3; i <= n; i++){
// 			long long fn = fn1 + fn2;
// 			cout << fn << endl;
// 			fn2 = fn1;
// 			fn1 = fn;
// 		}
// 	}
// }


// uoc chung lon nhat :Euclid
// GCD: Greatest common divisor

// int gcd1(int a, int b){
// 	for(int i = min(a, b); i >= 1; i--){
// 		if(a % i ==0 && b % i == 0)
// 			return i;
// 	}
// }
// cach 2 : CACH HAI NHANH HON VA TOI UU HON

// int gcd2(int a, int b){
// 	//b = 0
// 	while(b != 0){
// 		int r = a % b;
// 		a = b;
// 		b = r;
// 	}
// 	return a;
// }

// boi chung nho nhat : LCM

// int lcm(int a, int b){// boi chung nho nhat 
// 	return a * b / gcd(a, b);
// }

// so thuan nghich , so doi xung , so palindrome

// bool tn( int n){
// 	int  rev = 0;// luu so lat nguoc 
// 	while( n != 0){
// 		rev = rev * 10 + n % 10;
// 		n /= 10;
// 	}
// 	if( rev == n){
// 		return true;
// 	}
// 	else{
// 		return false;
// 	}	
// }

// so hoan hao : Co tat ca cac uoc nho hon no va co tong = no
// bool hh(int n){
// 	int sum = 0;
// 	for(int i = 1; i <= sqrt(n); i++ ){
// 		if(n % i ==0){
// 			sum += i;
// 			if(i != n / i){
// 				sum += n / i;
// 			}
// 		}
// 	}
// 	if( sum - n ==n){
// 		return true;
// 	}
// 	return false;
// }

// so chinh phuong : X^2 : 

// bool cp(int n){
// 	int can = sqrt(n);
// 	if(can * can == n)
// 		return true;
// 	else
// 		return false;		
// }


// to hop chap k cua n 
// long long gt(int n){
// 	long long res = 1;
// 	for(int i = 1; i <= n; i++){
// 		res *= i; 
// 	}
// 	return res;
// }

// long long C(int n, int k){
// 	return gt(n) / (gt(k) * gt(n-k));
// }
// // cach duoi ngan gon hon
// long long C2(int n, int k){
// 	long long res = 1;
// 	for(int i = 1; i <= k; i++){
// 		res *=(n -i + 1);
// 		res /= i;
// 	}
// 	return res;
// }

// tinh tong uoc, dem uoc cua 1 so 


// int demUoc(int n){
// 	int cnt = 0;
// 	for(int i = 1; i <= sqrt(n); i++){
// 		if(n % i == 0){
// 			++cnt;// dem uoc i 
// 			if(i != n / i){
// 				++cnt; // dem uoc n / i
// 			}
// 		}
// 	}
// 	return cnt;
// }



// int tongUoc(int n){
// 	int tong = 0;
// 	for(int i = 1; i <= sqrt(n); i++){
// 		if(n % i == 0){
// 			tong += i;
// 			if(i != n / i){
// 				tong += n / i;
// 			}
// 		}
// 	}
// 	return tong;
// }

// ham kiem tra so nguyen to 

// bool nt(int n){
// 	if(n < 2){
// 		return false;
// 	}
// 	for(int i = 2; i <= sqrt(n); i++){
// 		if(n % i == 0 ){// n co them 1 uoc ngoai 1 va chinh no 
// 			return false;// no khong the la so nguyen to 
// 		}
// 	}
// 	return true;
// }

// Ham phan tich thua so nguyen to 

// void pt(int n){
// 	for(int i = 2; i <= sqrt(n); i++){
// 		if(n % i == 0){
// 			// i la thua so nguyen to 
// 			while( n % i == 0){
// 				cout << i << ' ';
// 				n /= i;
// 			}
// 		}
// 	}
// 	if( n != 1){
// 		cout << n << endl;
// 	}
// }

// // ham tinh tong giai thua cac chu so cua n va in ra
 
// int gt(int n){
// 	int res = 1;
// 	for(int i = 1; i<= n; i++){
// 		res *= i;
// 	}
// 	return res;
// }
// int tongcs(int n){
// 	int tong = 0;
// 	while(n){
// 		tong += gt(n % 10);
// 		n /= 10;
// 	}
// 	return tong;
// }
