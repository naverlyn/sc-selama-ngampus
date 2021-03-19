#include <iostream>

/* sengaja memakai #define karna irit code */

#define rizal using namespace std //meminimalisir namespace
#define ok return //mengubah return menjadi ok
#define siap 0 //mengubah 0 menjadi siap

rizal;

int main()
{
	/* jadian a sebagai didalam [] seperti di matriks
	lalu b menjadi inputan */
	int a[100], b;
	cout<<"Masukan Jumlah Array:"; cin>>b;

	/* definisikan */
	for (int i = 0; i < b; i++)
	{
		/* code */
		cin>>a[i]; //isikan var i kedalam var a
	}

	/* keluarkan */
	cout<<"\n Angk a yang diinput: "<<endl;
	for (int i = 0; i < b; i++)
	{
		/* code */
		cout<<a[i]<<endl;
	}
	ok siap;
}