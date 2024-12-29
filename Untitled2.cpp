#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

class Book {
	private:
		string bookId;
		string bookName;
		string bookAuthor;
		string bookCategory;
		string bookPublisher;
		int bookYear;
	public:
		Book(){}
		Book(string _id, string _name, string _author, string _category, string _publisher, int _year): bookId(_id), bookName(_name), bookAuthor(_author), bookCategory(_category), bookPublisher(_publisher), bookYear(_year) {}
		void addBook();
		void delBook(string _id);
		void editBook(string _id);
		void searchBook(string query);
		void showBook();
		void readData();
		void writeData();
		void sortById();
		void sortByName();
		void setName(string _name){
			bookName = _name;
		}
		void setAuthor(string _author){
			bookAuthor = _author;
		}
		void setCategory(string _category){
			bookCategory = _category;
		}
		void setPublisher(string _publisher){
			bookPublisher = _publisher;
		}
		void setYear(int _year){
			bookYear = _year;
		}
		string getId(){
			return bookId;
		}
		string getName(){
			return bookName;
		}
};

vector<Book> listBook;

void Book::addBook(){
	string _id, _name, _author, _category, _publisher;
	int _year;
	cin.ignore(32767,'\n');
	cout << "Nhap ma so sach: "; getline(cin, _id);
	cout << "Nhap ten sach: "; getline(cin, _name);
	cout << "Nhap ten tac gia: "; getline(cin, _author);
	cout << "Nhap the loai: "; getline(cin, _category);
	cout << "Nhap nha xuat ban: "; getline(cin, _publisher);
	cout << "Nhap nam xuat ban: "; cin >> _year;
	listBook.push_back(Book(_id, _name, _author, _category, _publisher, _year));
}

void Book::showBook(){
	printf("+----------+------------------------------------------------------------+----------------------+----------------------+---------------------------+--------------+\n");
	printf("| %-8s | %-58s | %-20s | %-20s | %-25s | %-12s |\n", "Ma sach", "Ten sach", "Tac gia", "The loai", "Nha xuat ban", "Nam xuat ban");
	printf("+----------+------------------------------------------------------------+----------------------+----------------------+---------------------------+--------------+\n");
	for(int i=0; i<listBook.size(); i++){
		printf("| %-8s | %-58s | %-20s | %-20s | %-25s | %-12d |\n", listBook[i].bookId.c_str(), listBook[i].bookName.c_str(), listBook[i].bookAuthor.c_str(), listBook[i].bookCategory.c_str(), listBook[i].bookPublisher.c_str(), listBook[i].bookYear);
	}
	printf("+----------+------------------------------------------------------------+----------------------+----------------------+---------------------------+--------------+\n");
}

void Book::delBook(string _id){
	for (int i; i<listBook.size(); i++){
		if(listBook[i].bookId == _id){
			listBook.erase(listBook.begin()+i);
		}
	}
}

void Book::searchBook(string query){
	printf("+----------+------------------------------------------------------------+----------------------+----------------------+---------------------------+--------------+\n");
	printf("| %-8s | %-58s | %-20s | %-20s | %-25s | %-12s |\n", "Ma sach", "Ten sach", "Tac gia", "The loai", "Nha xuat ban", "Nam xuat ban");
	printf("+----------+------------------------------------------------------------+----------------------+----------------------+---------------------------+--------------+\n");
	for(int i=0; i<listBook.size(); i++){
		if(strstr(listBook[i].bookName.c_str(), query.c_str()) != NULL){
			printf("| %-8s | %-58s | %-20s | %-20s | %-25s | %-12d |\n", listBook[i].bookId.c_str(), listBook[i].bookName.c_str(), listBook[i].bookAuthor.c_str(), listBook[i].bookCategory.c_str(), listBook[i].bookPublisher.c_str(), listBook[i].bookYear);
		}
	}
	printf("+----------+------------------------------------------------------------+----------------------+----------------------+---------------------------+--------------+\n");
}

void Book::editBook(string _id){
	for(int i=0; i<listBook.size(); i++){
		if(listBook[i].bookId == _id){
			string _name, _author, _category, _publisher;
			int _year;
			cout << "Nhap ten sach: "; getline(cin, _name);
			cout << "Nhap ten tac gia: "; getline(cin, _author);
			cout << "Nhap the loai: "; getline(cin, _category);
			cout << "Nhap nha xuat ban: "; getline(cin, _publisher);
			cout << "Nhap nam xuat ban: "; cin >> _year;
			listBook[i].setName(_name);
			listBook[i].setAuthor(_author);
			listBook[i].setCategory(_category);
			listBook[i].setPublisher(_publisher);
			listBook[i].setYear(_year);
		}
	}
}

void Book::readData(){
	ifstream bookFile("book_list.csv");
	string header, line;
	string _id, _name, _author, _category, _publisher, _year;
	getline(bookFile, header);
	while (getline(bookFile, line)){
		stringstream str(line);
		if(getline(str,_id,';') && getline(str,_name,';') && getline(str,_author,';') && getline(str,_category,';') && getline(str,_publisher,';') && getline(str,_year,';')){
			listBook.push_back(Book(_id, _name, _author, _category, _publisher, stoi(_year)));
		}
	}
}

void Book::writeData(){
	ofstream bookFile("book_list.csv");
	bookFile << "Ma sach;Ten sach;Tac gia;The loai;Nha xuat ban;Nam xuat ban" << endl;
	for(int i=0; i<listBook.size(); i++){
		bookFile << listBook.at(i).bookId << ";" << listBook.at(i).bookName << ";" << listBook.at(i).bookAuthor << ";" << listBook.at(i).bookCategory << ";" << listBook.at(i).bookPublisher << ";" << listBook.at(i).bookYear << endl;
	}
}

bool compareById(Book book1, Book book2){
	return book1.getId() < book2.getId();
}

void Book::sortById(){
	sort(listBook.begin(), listBook.end(), compareById);
}

bool compareByName(Book book1, Book book2){
	return book1.getName() < book2.getName();
}

void Book::sortByName(){
	sort(listBook.begin(), listBook.end(), compareByName);
}

int main(){
	int choice;
	string book_id, query;
	Book book;
	
	book.readData();
	
	while(true){
		cout << "\nCHUONG TRINH QUAN LY THONG TIN SACH TRONG THU VIEN\n";
		cout << "	1. Them sach vao thu vien.\n";
		cout << "	2. Sua thong tin sach.\n";
		cout << "	3. Xoa thong tin sach.\n";
		cout << "	4. In danh muc sach trong thu vien.\n";
		cout << "	5. Luu danh sach vao CSDL.\n";
		cout << "	6. Sap xep sach theo ma so.\n";
		cout << "	7. Sap xep sach theo ten.\n";
		cout << "	8. Tim kiem theo ten sach.\n";
		cout << "	0. Thoat chuong trinh.\n";
		cout << "Ban chon chuc nang nao? ";
		cin >> choice;
		
		switch (choice){
			case 1:
				cout << "Nhap thong tin sach can them vao:\n";
				book.addBook();
				break;
			case 2:
				cin.ignore();
				cout << "Nhap ma so sach can sua: ";
				getline(cin, book_id);
				book.editBook(book_id);
				break;
			case 3:
				cout << "Nhap ma so sach can xoa: ";
				getline(cin, book_id);
				book.delBook(book_id);
				break;
			case 4:
				cout << "		THONG TIN SACH TRONG THU VIEN:\n";
				book.showBook();
				break;
			case 5:
				book.writeData();
				cout << "Thong tin sach da duoc luu vao CSDL!\n";
				break;
			case 6:
				book.sortById();
				book.showBook();
				break;
			case 7:
				book.sortByName();
				book.showBook();
				break;
			case 8:
				cin.ignore();
				cout << "Nhap tu khoa can tim: ";
				getline(cin, query);
				book.searchBook(query);
				break;
			case 0:
				return 0;
		}
	}
}																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																