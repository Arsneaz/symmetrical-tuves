#include <iostream>
using namespace std;

void decimalToBinary()
{
	cout << "====================================================================================================" << endl;
	
	cout << "Masukan Bilangan Desimal: ";
	int N; cin >> N;
	
	int arr[32];
	
	// Biner setiap index
	int i = 0;
	while (N > 0)
	{
		arr[i++] = N % 2;
		N /= 2;
	}
	
	// Display Biner
	cout << "Bilangan Biner: ";
	for (int j = i - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
	cout << endl;
	
	cout << "====================================================================================================" << endl;

}

void binaryToDecimal()
{	
	cout << "====================================================================================================" << endl;

	cout << "Masukan Bilangan Biner: ";
	int N; cin >> N;
	
	int total_number = 0, base = 1;
	
	while (N > 0)
	{
		// Total Number = Base (1 / 0) * (10^x)
		int last_digit = N % 10;
		total_number += last_digit * base;
		base *= 2;
		N /= 10;
	}
	
	cout << "Bilangan Desimalnya: " << total_number << endl;
	
	cout << "====================================================================================================" << endl;
}

int main() {

	cout << "====================================================================================================" << endl;
	cout << "                           Program Konversi Decimal Ke Biner" << endl;
	cout << "====================================================================================================" << endl;

	bool check;
	do
	{
		// Input Operasi
		int option;
		do
		{
			cout << "Masukan Pilihan Operasi ( 1 - Desimal Ke Biner ) ( 2 - Biner Ke Desimal ) : ";
			cin >> option;
		}
		while (option < 1 || option > 2);
		
		// Opsi Pilihan Fungsi
		option == 1 ? decimalToBinary() : binaryToDecimal();
		
		// Ulangi Program
		cout << "Ingin Mengunakan Program Lagi (y/n) : ";
		char again; cin >> again;
		switch (again)
		{
			case 'y':
				check = true; break;
			case 'n':
				check = false; break;
			default:
				cout << "Invalid type of input (error 101)." << endl;
				check = false; break;
		}
	}
	while (check);
	
	return 0;
}


