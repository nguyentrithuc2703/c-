#include<bits/stdc++.h>

using namespace std;

class SinhVien {
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
        in.ignore(); //loai bo ki tu xuong don sau khi nhap diem
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
    vector<SinhVien> danhSachSinhVien(n);
    //Nhap danh sach sinh vein
    for(int i = 0; i < n; ++i){
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cin >> danhSachSinhVien[i];
    }

    //sap xep diem theo thu tu giam dan
    sort(danhSachSinhVien.begin(), danhSachSinhVien.end(), [](const SinhVien& a, const SinhVien& b){
        return a.tinhDiemTrungBinh() > b.tinhDiemTrungBinh();
    });

   //in danh sach sau khi sap xep
    cout << "\nDanh sach sinh vien sau khi sap xep theo diem trung binh giam dan:\n";
    for(const SinhVien& sv : danhSachSinhVien){
        cout << sv << endl;
    }
    return 0;
}

