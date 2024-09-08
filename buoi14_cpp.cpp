#include<bits/stdc++.h>

using namespace std;

//vector : nhu mang 1 chieu 
//iterator :
/*
ham insert : them 1 phan tu vao trong vector cuphap : v.insert(v.bein() + x, val);
ham erase : xoa 1 phan tu trong vector thong qua iterator cuphap : v.erase(v.begin() + x);
*/
/*ham pair : kieu du lieu , luu cac phan tu theo cap vidu nhu N diem toa trong mat phang Oxy no gom co 2 phan :
CUPHAP : pair<kieu du lieu, kieu du lieu> p; vidu nhu : pair<int , int > p;
khi can luu gia tri t su ham make_pair vidu nhu : pair<int, int > p = make_pair(100, 200);
1 : first(thanh phan thu nhat )
2 : second(thanh phan thu hai ) 
*/  
//Sort = Intro sort = quick sort(sap xep nhanh, ung dung rat nhieu trong thuc te ) + heap sort : O(Nlog(N))
// Trong sort neu muon sap xep giam dan thi can them tham so thu 3 cho ham sort vd nhu : sort(a, a + n, greater<int>());
// Trong ham sort neu muon sap xep tu chi so x den chi so y  thi : sort(a + x, a + y + 1) x => y
// Comparison function = comparator : Tieu chi sap xep   
// 2 kieu tra ve 
// 1 true :
// 2 false :
// a dung truoc va b dung sau trong cai mang 
// neu a va b da dung thu tu sap xep ma ban mong muon thi tra ve true
// neu a va b nguoc thu tu ban mong muon thi se tra ve false

// sap xep theo nhieu tieu chi :ViDu
// 1 : sap xep theo tong chu so tang dan , 
// neu 2 so co cung tong chu so thi sap xep cho phan tu co gia tri nho hon dung truoc :
 
// Tinh Chat stable : on dinh
/*vecto lam tham so cho ham :
void tong(vector<int> v){
	int sum = 0;
	for(int x : v){
		sum += x;
	}
	return sum;

}
*/ 

/*
int tong1(int n){
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
bool comp1(int a, int b){
	int s1 = tong1(a), s2 = tong1(b);
	if (s1 <= s2){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	sort(a, a + n, comp1);
	for(int x : a){
		cout << x << ' ';
	}
	return 0;
}
*/

bool nt(long long n){
	for(int i = 2; i < sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	} 
	return true;
}

vector<int> prime_list(vector<int> v){
	vector<int> res;
	for(int x : v){
		if(nt(x)){
			res.push_back(x);
		}
	}
	return res;
}

void nhap(vector<int> &v){
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
}

void in(vector<int> v){
	for(int x : v){
		cout << x << " ";
	}
}

int main(){
	vector<int> v;
    nhap(v);
    vector<int> res = prime_list(v);
	in(res);
	return 0;
}












/*

sap xep theo first tang dan , neu 2 pair co cung first thi pair nao co second nho hon se sap xep truoc
*/

//bool comp(pair<int, int> a, pair<int, int> b){
//	if(a.first != b.first){
//		return a.first < b.first;
//	}
//	else{
//		return a.second < b.second;
//	}
//}
//int main(){
//	int n;
//	cin >> n;
//	pair<int, int> a[n];
//	for(int i = 0; i < n; i++){
//		cin >> a[i].first >> a[i].second;
//	}
//	sort(a, a + n, comp);
//	for(pair<int, int> x : a){
//		cout << x.first << ' ' << x.second << endl;
//	}
//}
//vector : nhu mang 1 chieu 
//iterator :
//ham pair : 2 phan 
//1 : first
//2 : second
//Sort = Intro sort = quick sort + heap sort : O(Nlog(N))
// Trong sort neu muon sap xep giam dan thi can them tham so thu 3 cho ham sort vd nhu : sort(a, a + n, greater<int>());
// Trong ham sort neu muon sap xep tu chi so x den chi so y  thi : sort(a + x, a + y + 1)
// Comparison function = comparator : Tieu chi sap xep 
// 2 kieu tra ve 
// 1 true :
// 2 false :
// a dung truoc va b dung sau trong cai mang 
// neu a va b da dung thu tu sap xep ma ban mong muon thi tra ve true
// neu a va b nguoc thu tu ban mong muon thi se tra ve false

// sap xep theo nhieu tieu chi :ViDu
// 1 : sap xep theo tong chu so tang dan , 
// neu 2 so co cung tong chu so thi sap xep cho phan tu co gia tri nho hon dung truoc :
 
/*
int tong(int n){
	int sum = 0;
	while (n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
bool comp2(int a, int b){
	int s1 = tong(a), s2 = tong(b);
	if(s1 != s2){
		return s1 < s2;
	}
	else{
        return a <= b;
    }
}

 
// sap xep theo tong chu so tang dan : 

int tong1(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
 	}
	return sum; 
}

bool comp1(int a, int b){
	int s1 = tong1(a), s2 = tong1(b);
	if(s1 <= s2){
		return true;
	}
	else{
		return false;
	}
}
// a dung truoc va b dung sau trong cai mang
// neu a va b da dung thu tu sap xep ma ban mong muon thi tra ve true
// neu a va b nguoc thu tu ban mong muon thi se tra ve false

bool comp(int a, int b){
	// a voi b ntn thi dung thu tu : 
	if(a <= b){
		return true;
	}
	else{
		return false;
	}
}
*/

//int main(){
//	vector<int> v = {1, 2, 3, 4, 5};
//	auto it = v.rbegin(); // Dau " :: " : Toan Tu Pham Vi
//	cout << *it << endl;// Dau " * " : Toan Tu Dai Tham Chieu
//	
//	//duyet qua cac phan tu trong vector :
//	
//    for (auto it = v.begin(); it != v.end(); it++){
//         cout << *it << " "; // Dau " * " : Toan Tu Dai Tham Chieu
//    }
//    pair<int, int> p = {1, 2};
//    //p=(100, 200)
//    cout << p.first << ' ' << p.second << endl;
//    return 0;
//} 