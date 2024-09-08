#include<bits/stdc++.h>

using namespace std;
/* on lai : 
c++ , STL, cac ky thuat giai bai toan :
+) mang, vactor, xau, set, map, pair ....
+) hai con tro, sliding window, mang cong don, mang hieu 
+) de quy , ly thuyet so va to hop

*/

int main(){
    int n, k;
    cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int res = INT_MAX;
    for (int i = 0; i < n; i++){
            // a[i]
        for (int j = i + 1; j < n; j++){
            if(abs(a[i] - a[j]) < res){
                res = abs(a[i] - a[j]);
            }
        }
    }
    cout << res << endl;
    return 0;
}