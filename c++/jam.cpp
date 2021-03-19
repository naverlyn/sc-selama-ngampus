#include <iostream>

using namespace std;

int main()
{
	int a, jam, menit, detik, sisa;

	cout<<"Input Detik : "; cin>>a;
		jam = a / 3600;
		sisa = a % 3600;
		menit = sisa / 60;
		detik = sisa % 60;
		cout<<"Jam : "<<jam;
		cout<<"\n";
		cout<<"Menit : "<<menit;
		cout<<"\n";
		cout<<"Detik : "<<detik;
		cout<<"\n";

	return 0;
}