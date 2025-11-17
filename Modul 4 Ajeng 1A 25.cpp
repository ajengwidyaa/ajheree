#include<iostream>
using namespace std;
int main()
{
	double nilai;
	cout << "~~~Program Penentuan Nilai~~~" << endl;
	cout << "Masukkan nilai angka:";
	cin >> nilai;
	cout << "\nHasil:" << endl;

	if (nilai > 89)
	{
		cout << "Nilai A (Naik Kelas)" << endl;
	}
	else if (nilai > 80 && nilai <= 89)
	{
		cout << "Nilai B (Naik Kelas)" << endl;
	}
	else if (nilai > 70 && nilai <= 80)
	{
		cout << "Nilai C (Naik Kelas)" << endl;
	}
	else if (nilai > 60 && nilai <= 79)
	{
		cout << "Nilai D (Tinggal Kelas)" << endl;
	}
	else if (nilai <= 60)
	{
		cout << "Nilai E (Tinggal Kelas)" << endl;
	}
	return 0;
}