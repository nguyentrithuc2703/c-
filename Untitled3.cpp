#include <iostream>
#include <string.h>

using namespace std;

struct MonHoc {
    char tenMon[50];
    int soTinChi, soTietThucHanh, soTietLyThuyet, hocKy;
};

void swap(MonHoc &a, MonHoc &b) {
    MonHoc temp = a;
    a = b;
    b = temp;
}

void bubbleSort(MonHoc ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ds[j].soTietLyThuyet < ds[j + 1].soTietLyThuyet) {
                swap(ds[j], ds[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap so luong mon hoc: ";
    cin >> n;
	cin.ignore();
    MonHoc dsMonHoc[100]; // Giả sử tối đa 100 môn học

    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin mon hoc thu " << i+1 << endl;
        cout << "Ten mon: "; cin.getline(dsMonHoc[i].tenMon, 50);
        cout << "So tin chi: "; cin >> dsMonHoc[i].soTinChi;
        cout << "So tiet thuc hanh: "; cin >> dsMonHoc[i].soTietThucHanh;
        cout << "So tiet ly thuyet: "; cin >> dsMonHoc[i].soTietLyThuyet;
        cout << "Hoc ky: "; cin >> dsMonHoc[i].hocKy;
        cin.ignore();
    }

    // In tat ca mon hoc
    cout << "\nThong tin tat ca cac mon hoc:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Ten mon: " << dsMonHoc[i].tenMon << endl;
        cout << "So tin chi: " << dsMonHoc[i].soTinChi << endl;
        cout << "So tiet thuc hanh: " << dsMonHoc[i].soTietThucHanh << endl;
        cout << "So tiet ly thuyet: " << dsMonHoc[i].soTietLyThuyet << endl;
        cout << "Hoc ky: " << dsMonHoc[i].hocKy << endl;
        cout << endl;
    }

    // In cac mon hoc co 3 tin chi
    cout << "\nCac mon hoc co 3 tin chi:\n";
    for (int i = 0; i < n; ++i) {
        if (dsMonHoc[i].soTinChi == 3) {
            cout << "Ten mon: " << dsMonHoc[i].tenMon << endl;
        }
    }

    // Sap xep va in theo so tiet ly thuyet giam dan
    bubbleSort(dsMonHoc, n);
    cout << "\nDanh sach mon hoc sap xep theo so tiet ly thuyet giam dan:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Ten mon: " << dsMonHoc[i].tenMon << endl;
        cout << "So tiet ly thuyet: " << dsMonHoc[i].soTietLyThuyet << endl;
    }

    return 0;
}