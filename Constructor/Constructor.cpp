#include <iostream>
#include <string>
using namespace std; 

class Mahasiswa {
	static int nim; 
	int id; 
	string nama; 

	void setID(); 
	void printAll(); 

	Mahasiswa(string pnama) :nama(pnama) {
		setID(); 
	}
};


int Mahasiswa::nim = 173;

void Mahasiswa::printAll() {
	cout << "ID = " << id << endl; 
	cout << "Nama = " << nama << endl; 
	cout << endl; 
}
