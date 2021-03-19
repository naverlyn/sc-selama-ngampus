#include <conio.h>
#include <iostream>
using namespace std;

void binary(int desimal);
void penjumlahan(int jumlah);

void binary(int desimal)
{
	int sisa, hasil;

	if (desimal <= 1)
	{
		cout<<desimal;
		return;
	}
	sisa = desimal % 2;
	hasil = desimal / 2;
	binary(hasil);
	cout<<sisa;
}

void penjumlahan(int jumlah)
{
	int a, b ;
	jumlah = a + b;
	penjumlahan(jumlah);
	cout<<jumlah;
}


int main()
{
	int z, x;
	cout<<"Masukan bilangan:"; cin>>z;
	cout<<"masukan bilangan lagi: "; cin>>x;
	cout<<z<<" Dalam biner: ";
	penjumlahan(z, x);
	//binary(z);

	return 0;
}