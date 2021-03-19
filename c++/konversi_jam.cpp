#include <iostream>

using namespace std;

int main()
{
	int D1, D2, M1, M2, J1, J2, total, T1, T2, T3, TT1, TT2, TT3, TTT1, TTT2, TTT3, J3, M3, D3, sisa, bayar, totakhir;

	cout<<"Warnet kita\n";
	cout<<"\n";
	cout<<"Input waktu awal pemakaian\n";
	cout<<"input Jam : ";cin>>J1;
	cout<<"input Menit : ";cin>>M1;
	cout<<"input Detik : ";cin>>D1;
	cout<<"Input waktu akhir pemakaian\n";
	cout<<"input Jam : ";cin>>J2;
	cout<<"input Menit : ";cin>>M2;
	cout<<"input Detik : ";cin>>D2;
		TT1 = J1 * 3600;
		TT2 = M1 * 60;
		TT3 = D1 * 60;
		T1 = TT1 + TT2 + TT3;

		TTT1 = J2 * 3600;
		TTT2 = M2 * 60;
		TTT3 = D2 * 60;
		T2 = TTT1 + TTT2 + TTT3;
		T3 = T2 - T1;
		total = T3 / 1.2;

		J3 = T3 / 3600;
		sisa = T3 % 3600;
		M3 = sisa / 60;
		D3 = sisa % 60;


	cout<<"Total Pemakaian Anda : "<<J3<< " Jam "<<M3<< " Menit "<<D3<< " Detik\n";
	cout<<"Total Bayar : Rp. "<<total;
	cout<<"\n";
	cout<<"Bayar : Rp. ";cin>>bayar;
	totakhir = bayar - total;
	cout<<"Kembaian Anda : Rp. "<<totakhir;
	return 0;
}