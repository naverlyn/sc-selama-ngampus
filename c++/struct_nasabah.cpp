#include <iostream>
#include <string.h>
#include <sstream>

#define awal using namespace std 

awal;


struct nasabah
{
	char nama[50];
	char alamat[100];
	int nohp;
};


int main()
{
	int pin;
	int nomor;
	string hp;

	struct nasabah budi;
		strcpy(budi.nama, "Dwi Budi");
		strcpy(budi.alamat, "Dimana mana");

	cout<<"Masukan PIN: "; cin >> pin;
		if (pin == 1234)
		{
			cout<<"Akses Berhasil!\n";
			cout<<"Atas nama" << budi.nama << endl;
			cout<<"Alamat : " << budi.alamat << endl;
			system("pause");
		}
		else
		{
			cout<<"ads";
		}

		return 0;
}