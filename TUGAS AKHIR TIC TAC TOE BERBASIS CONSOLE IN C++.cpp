#include <iostream>
using namespace std;

void tampilkanBagan();
const int baris = 3;
const  int kolom = 3;
char baganGame[baris][kolom] = { { '*','*','*' },{ '*','*','*' },{ '*','*','*' } };

void tampilkanBagan(){
	cout << "      0   1   2";
	cout << endl;
	cout << "  0  " << baganGame[0][0] << "  | " << baganGame[0][1] << " | " << baganGame[0][2] << endl;
	cout << "     ___|" << "___|___" << endl;
	cout << "  1  " << baganGame[1][0] << "  | " << baganGame[1][1] << " | " << baganGame[1][2] << endl;
	cout << "     ___|" << "___|___" << endl;
	cout << "  2  " << baganGame[2][0] << "  | " << baganGame[2][1] << " | " << baganGame[2][2] << endl;
	cout << "        |" << "   |   " << endl;
}

int main(){
	string pemain1;
	string pemain2;
	int baris = 3;
	int kolom = 3;
	char giliran = 'X';


	cout << "AYO BERMAIN GAME TIC TAC TOE!" << endl << endl;
	cout << "Pemain 1, ketikkan nama Anda: ";
	cin >> pemain1;
	cout << pemain1 << ", Anda adalah pemain 'X'! Anda juga mendapatkan giliran pertama untuk bermain.";
	cout << endl << endl;


	cout << "Pemain 2, ketikkan nama Anda: ";
	cin >> pemain2;
	cout << pemain2 << ", Anda adalah pemain 'O'!";
	cout << endl << endl;

	cout << "GAME TIC TAC TOE, DIMULAI!" << endl << endl;
	
	tampilkanBagan();

	do{
		cout << "Untuk memilih posisi, ketikkan nomor baris dan nomor kolom!" << endl;
		cout << "Baris = ";
		cin >> baris;
		cout << "Kolom = ";
		cin >> kolom;
		if (baganGame[baris][kolom] == '*') {
			baganGame[baris][kolom] = giliran;
			if (giliran == 'X')
				giliran = 'O';
			else
				giliran = 'X';
		}
		cout << endl<< endl << endl;
		
		tampilkanBagan();
		
		cout << endl<< endl << endl;
			
	} while (true);

	tampilkanBagan();

	return 0;
}

