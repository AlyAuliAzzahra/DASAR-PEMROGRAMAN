#include<iostream>
using namespace std;

int main(){
	
	cout << "\t TIC TAC TOE"<< endl;
	cout << "============================"<< endl;
	cout << endl;
	
	int ukuranPersegi, a, b;
	
	cout << "Masukkan ukuran persegi= ";
	cin >> ukuranPersegi;
	cout << endl;
	
	for (b=1;b<=ukuranPersegi;b++){
		cout << " _";
	}
	
	cout << endl;
	
	for (a=1;a<=ukuranPersegi;a++){
		cout << "|";
	
		for (b=1;b<=ukuranPersegi;b++){
			cout << "_|";
		}
		
		cout << endl;
	}
	
	return 0;
}



