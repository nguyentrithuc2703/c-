#include<bits/stdc++.h>
using namespace std;
/* Set :
cac bai toan lien quan den xoa, them ,tim kiem mot phan tu nao do duoc thuc hien lai nhieu lan
cac bai toan lien quan den gia tri khac nhau cua mang
CU PHAP : set<data_type> set_name;
ham find : kiem tra su ton tai cua mot phan tu nao do trong set ,  day la mot ham su dung rat nhieu cua set O(logN)
ha, find tra ve iterator toi phan tu neu no tim thay , nguoc lai no tra ve iterator end() cua set khi phan tu do khong ton tai
ham count(dem) : O(logN) dem mot gia tri nao do xuat hien trong set neu co tra ve 1 neu khong tra ve 0

*/

int main(){
    set<int> se;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        se.insert(x);
    }
    int q;
    cin >> q;
    while(q--){
        int y;
        cin >> y;
        if(se.count(y)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
} 