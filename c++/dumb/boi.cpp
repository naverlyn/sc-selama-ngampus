#include <iostream>

using namespace std;

int fungsi_tambah(int a, int b)
{
	int total;

	total = a + b;
}

int main()
{
	int i, j;

	cout<<"Masukan nilai A: "; cin>>i;
	cout<<"Masukan nilai B: "; cin>>j;
	cout<<"Hasil: "<<fungsi_tambah(i, j);

	return 0;
}