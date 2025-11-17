#include <iostream>
using namespace std;
int main()
{
	double harga, diskon, jumlahDiskon,hargaSetelahDiskon;

	cout << "Masukkan" << endl;
	cout << "Harga Barang(Rp)=" << endl;
	cin >> harga;

	cout << "Diskon Barang(%)=" << endl;
	cin >> diskon;

	jumlahDiskon = harga * (diskon / 100);
	cout << "Jumlah Diskon=Rp" << jumlahDiskon << endl;

	hargaSetelahDiskon = harga - jumlahDiskon;
	cout << "Harga Setelah Diskon=Rp" <<hargaSetelahDiskon << endl;

	return 0;
}