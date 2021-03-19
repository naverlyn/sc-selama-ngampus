#include <iostream>

using namespace std;

/* 
	bikin variabel fungsi dulu
*/
int td(int J, int M, int D)
{
	int i  = (J * 3600) + (M * 60) + (D * 60); 
	return i;
} 

int jam(int td)
{
	int a = td / 3600;
	return a;
}

int sisaan(int td)
{
	int a = td % 3600;
	return a;
}

int menit(int sisa)
{
	int a = sisa / 60;
	return a;
}

int detik(int sisa)
{
	int a = sisa % 60;
	return a;
}

/*
	biikin garisan biiar rapih
*/
void garisan()
{
	cout<<"================================="<< endl;
}

/*
	badan, gan
*/
int main()
{
	int e, X, Y, Z, O, P, Q;
	int J1, M1, D1, sisa;
	int bayar, total, y, total1, total2;
	begin:
	cout<<"Masukan Jam Awal: ";cin>>X;
	cout<<"Masukan Menit Awal: ";cin>>Y;
	cout<<"Masukan Detik Awal: ";cin>>Z;
	garisan();
	cout<<"Masukan Jam Akhir: ";cin>>O;
	cout<<"Masukan Menit Akhir: ";cin>>P;
	cout<<"Masukan Detik Akhir: ";cin>>Q;

	/*panggil variabel dan fungsi*/
	e = td(X, Y, Z);
	int j = td(O, P, Q);
	total1 = j - e;
	total2 = total1 / 1.2;

	/*ubah dari detikan ke jam*/
	J1 = jam(total1);
	sisa = sisaan(total1);
	M1 = menit(sisa);
	D1 = detik(sisa);
	
	/*panggil semua*/
	kembali:
	cout<<"Total Pemakaian: "<<J1<<" Jam "<<M1<< " Menit "<<D1<< " Detik"<<endl;
	cout<<"Total Pembayaran Anda: Rp. "<<total2<<",-"<<endl;
	cout<<"Bayar: Rp. ";cin>>bayar;
	garisan();
	total = bayar - total2;
	if (bayar < total2)
	{
		system("CLS");
		cout<<"Jangan Ngutang"<<endl;
		garisan();
		goto kembali;
	}
	else
	{
		cout<<"Kembalian: Rp. "<<total<<",-"<<endl;
	}
	cout<<"Ingin Input kembali? (1/0): ";cin>>y;
	if (y == 1)
	{
		system("CLS");
		goto begin;
	}
	else
		{
			cout<<"Bye";
		}
	return 0;
}