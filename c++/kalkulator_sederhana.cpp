#include <iostream>

using namespace std;

void garis()
{
	cout<<"------------------";
}

int tambah(int A, int B)
{
	int x = A + B;
	return x;
}

int kurang(int A, int B)
{
	int x = A - B;
	return x;
}

int bagi(int A, int B)
{
	int x = A / B;
	return x;
}

int kali(int A, int B)
{
	int x = A * B;
	return x;
}

int main()
{
	int x, y, pilih, hasil;
	char name[90];
	cout<<"Masukan Nama : ";cin>>name;
garis();
	cout<<"Silahkan Pilih salah satu!"<<endl;
	cout<<"1. Tambah"<<endl;
	cout<<"2. Kurang"<<endl;
	cout<<"3. Bagi"<<endl;
	cout<<"4. Kali"<<endl;
	cout<<"Pilih : ";cin>>pilih;
	if (pilih == 1)
	{
		cout<<"Masukan Nilai A :"; cin>>x;
		cout<<"Masukan Nilai B :"; cin>>y;
	hasil = tambah(x, y);
		cout<<"Nama Anda"<<name ;
		cout<<endl;
		cout<<"Hasil : "<<hasil;
	}

	return 0;
}




