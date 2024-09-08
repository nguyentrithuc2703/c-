#include<bits/stdc++.h>

using namespace std;

void thaydoi(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		v[i] = 100;
	}
}

int main(){
	int n;
	cin >> n;
	pair<int , int> a[n];
	for(int i = 0; i < n ; i++){
		cin >> a[i].first >> a[i].second;
	}
	for(int i = 0; i < n; i++){
		cout << a[i].first << ' ' << a[i].second <<endl;
	}
}