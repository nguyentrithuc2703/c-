#include<bits/stdc++.h>

using namespace std;
// ve hinh : dung vong for long nhau
//intput:5
//output:
//*****
//*   * 
//*   * 
//*   * 
//*****
int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || i == n || j == 1 || j == n){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
