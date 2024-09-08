#include <bits/stdc++.h>

using namespace std;
/*Huong doi tuong(Object oriented) : phan chia nhiem vu cho cac doi tuong lam viec va tuong tac voi nhau :
    class :
    object : La san pham sinh ra tu class(thua huong tat ca nhung gi co trong class do)
    Thuoc Tinh : La thong tin ve cac doi tuong
    Phuong thuc (ham) : phuong thuc cua thuoc tinh
    HAM KHOI TAO VA HAM HUY :
    +ham khoi tao(constructor) :
*/
class student{
public :
    char ID[20];
    char name[100];
    int age;
    float mark;
    char address[100];

    //ham khoi tao :
    Student(){
        this -> name[0] = '\0';
        this -> address[0] = '\0';
        this -> ID[0] = '\0';
        this -> age = 0;
        this -> mark = 0;
    }

    Student(char *name){
        strcpy(this->name, 99, name);
        this->name[0] = '\0';
        this->address[0] = '\0';
        this->ID[0] = '\0';
        this->age = 0;
        this->mark = 0;
    }
    void showInfo(){
        cout << "================= Student Info ==================" << endl;
        cout << " Name: " << name << endl;
        cout << " Address: " << address << endl;
        cout << " ID: " << ID << endl;
        cout << " Age: " << age << endl;
        cout << " Mark: " << mark << endl;
        cout << "================================================" << endl;
    }
};
int main(){
    
    return 0;
}