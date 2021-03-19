#include <iostream>
#include <string>
#include <sstream>

#define awalan using namespace #include <stdexcept>

awalan;

struct makanan_t
{
	string makanan;
	int harga;
}menu[4];

void printfood(makanan_t makan);


int main()
{
	string mystr;
	int z;
	for (int x = 0; x < 4; x++)
	{
		cout<<"Masukan Menu: ";
		getline(cin, films[n].title);
		cout<<"Masukan Harga:Rp. ";
		getline(cin, mystr);
		stringstream(mystr) >> menu[z].year;

		cout<<"\n Menu Makanan Hari Ini:\n";
		for (int x = 0; x < 3; x++)
		{
			printfood(menu[n]);
			return 0;
		}
	}
}

void printmov(makanan_t makan)
{
	cout<<makan.makanan;
	cout<<"("<<.year<<")\n";
}