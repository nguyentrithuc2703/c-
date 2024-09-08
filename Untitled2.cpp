#include<bits/stdc++.h>

using namespace std;

class SinhVien{
public:
    string hoTen;
    string ngaySinh;
    string gioiTinh;
    string lop;
    float diemToan, diemLy, diemHoa;

    float tinhDiemTrungBinh() const{
        return (diemToan + diemLy + diemHoa) / 3.0;
    }
    //Nhap thong tin sinh vien bang cach nap chong toan tu 
    friend istream& operator>>(istream& in, SinhVien& sv){
        cout << "Nhap ho ten: "; getline(in, sv.hoTen);
        cout << "Nhap ngay sinh: "; getline(in, sv.ngaySinh);
        cout << "Nhap gioi tinh: "; getline(in, sv.gioiTinh);
        cout << "Nhap lop: "; getline(in, sv.lop);
        cout << "Nhap diem Toan: "; in >> sv.diemToan;
        cout << "Nhap diem Ly: "; in >> sv.diemLy;
        cout << "Nhap diem Hoa: "; in >> sv.diemHoa;
        in.ignore(); 
        return in;
    }
    //in thong tin sinh vien bang cach nap chong toan tu
    friend ostream& operator<<(ostream& out, const SinhVien& sv){
        out << "Ho ten: " << sv.hoTen << "\n";
        out << "Ngay sinh: " << sv.ngaySinh << "\n";
        out << "Gioi tinh: " << sv.gioiTinh << "\n";
        out << "Lop: " << sv.lop << "\n";
        out << "Diem Toan: " << sv.diemToan << "\n";
        out << "Diem Ly: " << sv.diemLy << "\n";
        out << "Diem Hoa: " << sv.diemHoa << "\n";
        out << "Diem trung binh: " << sv.tinhDiemTrungBinh() << "\n";
        return out;
    }
};

int main(){
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore(); 
    
    SinhVien** danhSachSinhVien = new SinhVien*[n];

    
    for(int i = 0; i < n; ++i){
        danhSachSinhVien[i] = new SinhVien();
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cin >> *danhSachSinhVien[i];
    }
    
    cout << ".....................................................................\n";
    
    for (int i = 0; i < n; ++i) {
        cout << *danhSachSinhVien[i] << endl;
    }

    for (int i = 0; i < n - 1; ++i){
        for (int j = i + 1; j < n; ++j) {
            if (danhSachSinhVien[i]->tinhDiemTrungBinh() < danhSachSinhVien[j]->tinhDiemTrungBinh()){
                swap(danhSachSinhVien[i], danhSachSinhVien[j]);
            }
        }
    }
    
    cout << "\nDanh sach sinh vien sau khi sap xep theo diem trung binh giam dan:\n";
    cout << ".....................................................................\n";
    for (int i = 0; i < n; ++i) {
        cout << *danhSachSinhVien[i] << endl;
    }

    for(int i = 0; i < n; ++i){
        delete danhSachSinhVien[i];
    }
    delete[] danhSachSinhVien;

    return 0;
}
