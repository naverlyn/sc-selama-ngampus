#include <iostream>

using namespace std;

int main()
{
	int menu, a, b;
	float c;

	cout<<"Menu Kalkulator :\n";
	cout<<"1. Penjumlahan\n";
	cout<<"2. Pengurangan\n";
	cout<<"3. Perkalian\n";
	cout<<"4. Pembagian\n";
	cout<<"Pilih salah satu dari menu diatas ! :"; cin>>menu;
	switch(menu)
	{
		case 1:
		cout<<"Masukan Nilai A : "; cin>>a;
		cout<<"Masukan Nilai B : "; cin>>b;
			c = a + b;
		cout<<a<< " + " <<b<< " Adalah " <<c;
		break;

		case 2:
		cout<<"Masukan Nilai A : "; cin>>a;
		cout<<"Masukan Nilai B : "; cin>>b;
			c = a - b;
		cout<<a<< " - "<<b<< " Adalah "<<c;
		break;

		case 3:
		cout<<"Masukan Nilai A : "; cin>>a;
		cout<<"Masukan Nilai B : "; cin>>b;
			c = a * b;
		cout<<a<< " x "<<b<< " Adalah "<<c;
		break;

		case 4:
		cout<<"Masukan Nilai A : "; cin>>a;
		cout<<"Masukan Nilai B : "; cin>>b;
			c = a / b;
		cout<<a<< " / "<<b<< " Adalah "<<c;
		break;

		default:
			cout<<"Maaf, Menu yg Anda masukan tidak ada";
		break;
	}
	return 0;
}