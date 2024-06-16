#include<iostream>
#include<math.h>
using namespace std;

// so thuan nghich , so doi xung , so palindrome

bool tn( int n){
	int  rev = 0; // luu so lat nguoc 
	int temp = n;
	while( n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	if( rev == temp){
		return true;
	}
	else{
		return false;
	}	
}

int main(){
	// nhap vao n ,in ra cac so nguyen to <= 
	int n; 
	cin >> n;
	cout << tn(n) << endl;
	return 0;
}
























// so thuan nghich , so doi xung , so palindrome

//bool tn( int n){
//	int  rev = 0;// luu so lat nguoc 
//	while( n != 0){
//		rev = rev * 10 + n % 10;
//		n /= 10;
//	}
//	if( rev == n){
//		return true;
//	}
//	else{
//		return false;
//	}	
//}

// so hoan hao : Co tat ca cac uoc nho hon no va co tong = no
//bool hh(int n){
//	int sum = 0;
//	for(int i = 1; i <= sqrt(n); i++ ){
//		if(n % i ==0){
//			sum += i;
//			if(i != n / i){
//				sum += n / i;
//			}
//		}
//	}
//	if( sum - n ==n){
//		return true;
//	}
//	return false;
//}

// so chinh phuong : X^2 : 

//bool cp(int n){
//	int can = sqrt(n);
//	if(can * can == n)
//		return true;
//	else
//		return false;		
//}
//

// to hop chap k cua n 
//long long gt(int n){
//	long long res = 1;
//	for(int i = 1; i <= n; i++){
//		res *= i; 
//	}
//	return res;
//}
//
//long long C(int n, int k){
//	return gt(n) / (gt(k) * gt(n-k));
//}
//// cach duoi ngan gon hon
//long long C2(int n, int k){
//	long long res = 1;
//	for(int i = 1; i <= k; i++){
//		res *=(n -i + 1);
//		res /= i;
//	}
//	return res;
//}

// tinh tong uoc, dem uoc cua 1 so 


//int demUoc(int n){
//	int cnt = 0;
//	for(int i = 1; i <= sqrt(n); i++){
//		if(n % i == 0){
//			++cnt;// dem uoc i 
//			if(i != n / i){
//				++cnt; // dem uoc n / i
//			}
//		}
//	}
//	return cnt;
//}

//

//int tongUoc(int n){
//	int tong = 0;
//	for(int i = 1; i <= sqrt(n); i++){
//		if(n % i == 0){
//			tong += i;
//			if(i != n / i){
//				tong += n / i;
//			}
//		}
//	}
//	return tong;
//}

// ham kiem tra so nguyen to 

//bool nt(int n){
//	if(n < 2){
//		return false;
//	}
//	for(int i = 2; i <= sqrt(n); i++){
//		if(n % i == 0 ){// n co them 1 uoc ngoai 1 va chinh no 
//			return false;// no khong the la so nguyen to 
//		}
//	}
//	return true;
//}

//Ham phan tich thua so nguyen to 

//void pt(int n){
//	for(int i = 2; i <= sqrt(n); i++){
//		if(n % i == 0){
//			// i la thua so nguyen to 
//			while( n % i == 0){
//				cout << i << ' ';
//				n /= i;
//			}
//		}
//	}
//	if( n != 1){
//		cout << n << endl;
//	}
//}

// ham tinh tong giai thua cac chu so cua n va in ra
 
//int gt(int n){
//	int res = 1;
//	for(int i = 1; i<= n; i++){
//		res *= i;
//	}
//	return res;
//}
//int tongcs(int n){
//	int tong = 0;
//	while(n){
//		tong += gt(n % 10);
//		n /= 10;
//	}
//	return tong;
//}
