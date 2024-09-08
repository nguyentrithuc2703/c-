#include <iostream>
#include <string>

using namespace std;

class SACH {
private:
    string maSach;
    string tenSach;

public:
    SACH();
    SACH(string maSach, string tenSach);
    void nhap();
    void xuat();
    string getMaSach();
};

SACH::SACH(){
	this->maSach="";
	this->tenSach="";
}

SACH::SACH(string maSach, string tenSach){
	this->maSach=maSach;
	this->tenSach=tenSach;
}

void SACH::nhap() {
    cout << "Nhap ma sach: ";
    getline(cin >> ws, maSach);
    cout << "Nhap ten sach: ";
    getline(cin >> ws, tenSach);
}

void SACH::xuat() {
    cout << "Ma sach: " << maSach << ", Ten sach: " << tenSach << endl;
}

string SACH::getMaSach() {
    return maSach;
}

class MUONTRA : public SACH {
private:
    string maDocGia;
    int soLuong;
    static float phiCuoc;

public:
    MUONTRA();
    MUONTRA(string maSach, string tenSach, string maDocGia, int soLuong);
	void nhap();
	void xuat();
	float tinhTienCuoc();
	int getSoLuong();
	string getMaDocGia();
};

MUONTRA::MUONTRA(){
	this->maDocGia="";
	this->soLuong=0;
}

MUONTRA::MUONTRA(string maSach, string tenSach, string maDocGia, int soLuong)
:SACH(maSach, tenSach){
	this->maDocGia=maDocGia;
	this->soLuong=soLuong;
}

void MUONTRA::nhap() {
    SACH::nhap();
    cout << "Nhap ma doc gia: ";
    getline(cin >> ws, maDocGia);
    cout << "Nhap so luong: ";
    cin >> soLuong;
}

void MUONTRA::xuat() {
    SACH::xuat();
    cout << "Ma doc gia: " << maDocGia << ", So luong: " << soLuong 
         << ", Phi cuoc: " << tinhTienCuoc() << endl;
}

float MUONTRA::tinhTienCuoc() {
    return soLuong * phiCuoc;
}

int MUONTRA::getSoLuong() {
    return soLuong;
}

string MUONTRA::getMaDocGia() {
    return maDocGia;
}

float MUONTRA::phiCuoc = 5000; // Giá tr? m?c d?nh cho phí cu?c mu?n tr?

int main() {
    SACH sach;
    cout << "Nhap thong tin sach:\n";
    sach.nhap();
    cout << "Thong tin sach:\n";
    sach.xuat();

    int n;
    do{
    cout << "Nhap so luong doc gia muon sach: ";
    cin >> n;
	}while(n<=0);

    MUONTRA* dsMuonTra = new MUONTRA[n];

    cout << "Nhap thong tin cac doc gia muon sach:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Doc gia thu " << i + 1 << ":\n";
        dsMuonTra[i].nhap();
    }

    cout << "Thong tin cac doc gia muon sach:\n";
    for (int i = 0; i < n; ++i) {
        dsMuonTra[i].xuat();
    }


    // 3) Hi?n th? các d?c gi? có s? lu?ng mu?n > 10 cu?n
    cout << "Doc gia muon hon 10 cuon sach:\n";
    for (int i = 0; i < n; ++i) {
        if (dsMuonTra[i].getSoLuong() > 10) {
            cout << "Ma doc gia: " << dsMuonTra[i].getMaDocGia() << endl;
        }
    }

    // 4) Tìm và hi?n th? mã d?c gi? có phí cu?c mu?n tr? nhi?u nh?t
    float maxPhiCuoc = dsMuonTra[0].tinhTienCuoc();
    for (int i = 1; i < n; ++i) {
        if (dsMuonTra[i].tinhTienCuoc() > maxPhiCuoc) {
            maxPhiCuoc = dsMuonTra[i].tinhTienCuoc();
        }
    }

    cout << "Doc gia co phi cuoc muon tra nhieu nhat:\n";
    for (int i = 0; i < n; ++i) {
        if (dsMuonTra[i].tinhTienCuoc() == maxPhiCuoc) {
            cout << "Ma doc gia: " << dsMuonTra[i].getMaDocGia() << endl;
        }
    }

    delete[] dsMuonTra;
    return 0;
}
