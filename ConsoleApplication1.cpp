#include <iostream>
using namespace std;
int arr[9];
int n;

void input() {

	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\rArray dapat mempunyai maksimal 20 elemen.\n";              //output ke layar
		}
	}
	cout << endl;                                    //output baris kosong
	cout << "===============" << endl;               //output ke layar
	cout << "Masukkan Elemen Array" << endl;         //output ke layar
	cout << "===============" << endl;               //output ke layar

	