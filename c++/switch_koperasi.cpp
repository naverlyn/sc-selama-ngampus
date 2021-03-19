/* aplikasi Koperasi
 * dari pascal convert ke C++
 * menggunakan fungsi
 */

/* bisa */

#include <iostream>

using namespace std;



/* pilihan nama barang, sementara */
void chitato()
{
	cout<<"Nama Barang : Chitato";
}

void lays()
{
	cout<<"Nama Barang : Lays";
}

void pringles()
{
	cout<<"Nama Barang : Pringles";
}
/* */

/* cuma pilihan bank */
void bank()
{
	cout<<"Pilih Metode Pembayaran!"<<endl;
	cout<<"1. Bank Mandiri"<<endl;
	cout<<"2. Bank BNI"<<endl;
	cout<<"3. Bank BJB"<<endl;
	cout<<"4. Cash"<<endl;
}
/* buat garisan */
void garisan()
{
	cout<<endl;
	cout<<"===================================="<<endl;
}

/* makanan */
void makanan()
{
	cout<<"1. Chitato 750gr Rp. 5.000,-"<<endl;
	cout<<"2. Lays Rp. 7.500,-"<<endl;
	cout<<"3. Pringles Rp. 5.500,-"<<endl;
}

void minuman()
{
	cout<<"1. Lasegar Rp. 4.000,-"<<endl;
	cout<<"2. Le Minerale Rp. 3.500,-"<<endl;
	cout<<"3. Aqua 350ml Rp. 3.000,-"<<endl;
}

/* buat diskon 30% */
int diskon30(int A)
{
	int x = A - ( A * 0.3 );
	return x;
}

/* buat diskon 25% */
int diskon25(int A)
{
	int x = A - (A * 0.25);
	return x;
}

/* buat diskon 15% */
int diskon15(int A)
{
	int x = A - (A * 0.15);
	return x;
}

/* rumus jumlah dia beli, beli * harga yang tertera */
int jumlahan(int A, int B)
{
	int x = A * B;
}

/* rumus kembalian */
int returning(int A, int B)
{
	int x = A - B;
	return x;
}

/* kalo bank, biasanya kan langsung auto bayar, jadi hasil kembalian harus 0 */
int nol(int A)
{
	int x = A - A;
	return x;
}


int main()
{
	int qty, x, y, z, total, pilihan, pilawal, harga, pibank, grandtot;
	int bayar, kembalian;
	int CCV;
	char nama[40];

	//cout<<"Masukan Nama Anda : "; cin>> nama;
	cout<<"Silahkan Pilih Barang Yang Tertera :"<<endl;
	cout<<"1. Makanan Ringan"<<endl;
	cout<<"2. Minuman"<<endl;
	cout<<"Pilihan Anda :"; cin>>pilawal;
	switch(pilawal)
	{
		case 1:
		awal:
		cout<<"Pilih Makanan Ringan"<<endl;
		makanan();
		cout<<endl;
		cout<<"Pilihan Anda : "; cin>>pilihan;
		if ( pilihan == 1)
		{
		harga = 5000;
		cout<<"Qty: "; cin>>qty;
		total = jumlahan(harga, qty);
		garisan();
		cout<<"Total : Rp."<<total;
		bank();
		cout<<"Pilihan Anda: "; cin>>pibank;
			switch (pibank)
			{
				case 1:
					CCV1:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 50000)
						{
							total = diskon15(total);
							cout<<"Anda Mendapat Diskon 15%"<<endl;
							cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
							break;	
						}
						else
						{
							cout<<"Total pembayaran anda : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
							break;
						}
						break;
				case 2:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 55000)
						{
							total = diskon25(total);
							cout<<"Anda Mendapat Diskon 25%"<<endl;
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
							break;
						}
						else
						{
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
							break;	
						}
						break;
				case 3:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 55000)
						{
							total = diskon25(total);
							cout<<"Anda Mendapat Diskon 25%"<<endl;
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
							break;
						}
						else
						{
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
							break;
						}
						break;
				case 4:
					bayaran:
					cout<<"Total Pembayaran : Rp."<<total;
					cout<<"Bayar : Rp."; cin>>bayar;
					kembalian = returning(bayar, total);
					if (total < bayar)
					{
						cout<<"Kembalian : Rp."<<kembalian<<endl;
						cout<<"Terimakasih";
					}
					else
					{
						cout<<"Jangan Ngutang!"<<endl;
						goto bayaran;
					}
					break;
				}//punya switch1
			//punya pilihan1
		}
	else if (pilihan == 2)
		{
			harga = 7500;
			cout<<"Qty: "; cin>>qty;
			total = jumlahan(qty, harga);
			cout<<"Total Pembayaran: Rp."<<total;
			garisan();
			bank();
			cout<<"Pilihan Anda : "; cin>>pibank;
				switch(pibank)
				{
				case 1:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 50000)
						{
							total = diskon15(total);
							cout<<"Anda Mendapat Diskon 15%"<<endl;
							cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";	
						}
						else
						{
							cout<<"Total pembayaran anda : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						break;
				case 2:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 55000)
						{
							total = diskon25(total);
							cout<<"Anda Mendapat Diskon 25%"<<endl;
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						else
						{
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";	
						}
						break;
				case 3:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 55000)
						{
							total = diskon25(total);
							cout<<"Anda Mendapat Diskon 25%"<<endl;
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						else
						{
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						break;
				case 4:
					bayaran2:
					cout<<"Total Pembayaran : Rp."<<total;
					cout<<"Bayar : Rp."; cin>>bayar;
					kembalian = returning(bayar, total);
					if (total < bayar)
					{
						cout<<"Kembalian : Rp."<<kembalian<<endl;
						cout<<"Terimakasih";
					}
					else
					{
						cout<<"Jangan Ngutang!"<<endl;
						goto bayaran;
					}
					break;
			}//punya switch2
		}//punya pilihan2
	else if (pilihan == 3)
	{
		cout<<"Hello world";
		break;
	}

	else
	{
		cout<<"Maaf, Menu Yang Anda masukan Salah, Silahkan Coba Lagi!"<<endl;
		goto awal;
	}
		case 2:
			cout<<"Pilih Minuman :"<<endl;
			awal1:
			minuman();
			cout<<endl;
			cout<<"Pilihan Anda : "; cin>>pilihan;
				if ( pilihan == 1)
					{
						harga = 4000;
						cout<<"Qty: "; cin>>qty;
						total = jumlahan(harga, qty);
						garisan();
						cout<<"Total : Rp."<<total;
						bank();
						cout<<"Pilihan Anda: "; cin>>pibank;
						switch (pibank)
						{
							case 1:
									cout<<"Masukan CC (16 Digit): "; cin>>CCV;
									if (total > 50000)
									{
										total = diskon15(total);
										cout<<"Anda Mendapat Diskon 15%"<<endl;
										cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
										grandtot = nol(total);
										cout<<"Kembalian : Rp."<<grandtot<<endl;
										cout<<"Terimakasih";	
									}
									else
									{
										cout<<"Total pembayaran anda : Rp."<<total<<endl;
										grandtot = nol(total);
										cout<<"Kembalian : Rp."<<grandtot<<endl;
										cout<<"Terimakasih";
									}
									break;
							case 2:
									cout<<"Masukan CC (16 Digit): "; cin>>CCV;
									if (total > 55000)
									{
										total = diskon25(total);
										cout<<"Anda Mendapat Diskon 25%"<<endl;
										cout<<"Total Pembayaran : Rp."<<total<<endl;
										grandtot = nol(total);
										cout<<"Kembalian : Rp."<<grandtot<<endl;
										cout<<"Terimakasih";
									}
									else
									{
										cout<<"Total Pembayaran : Rp."<<total<<endl;
										grandtot = nol(total);
										cout<<"Kembalian : Rp."<<grandtot<<endl;
										cout<<"Terimakasih";	
									}
									break;
							case 3:
									cout<<"Masukan CC (16 Digit): "; cin>>CCV;
									if (total > 55000)
									{
										total = diskon25(total);
										cout<<"Anda Mendapat Diskon 25%"<<endl;
										cout<<"Total Pembayaran : Rp."<<total<<endl;
										grandtot = nol(total);
										cout<<"Kembalian : Rp."<<grandtot<<endl;
										cout<<"Terimakasih";
									}
									else
									{
										cout<<"Total Pembayaran : Rp."<<total<<endl;
										grandtot = nol(total);
										cout<<"Kembalian : Rp."<<grandtot<<endl;
										cout<<"Terimakasih";
									}
									break;
							case 4:
									bayarans:
									cout<<"Total Pembayaran : Rp."<<total;
									cout<<"Bayar : Rp."; cin>>bayar;
									kembalian = returning(bayar, total);
									if (total < bayar)
									{
										cout<<"Kembalian : Rp."<<kembalian<<endl;
										cout<<"Terimakasih";
									}
									else
									{
										cout<<"Jangan Ngutang!"<<endl;
										goto bayarans;
									}
									break;
						}//punya switch1
		//punya pilihan1
					}
	else if (pilihan == 2)
		{
			harga = 3500;
			cout<<"Qty: "; cin>>qty;
			total = jumlahan(qty, harga);
			cout<<"Total Pembayaran: Rp."<<total;
			garisan();
			bank();
			cout<<"Pilihan Anda : "; cin>>pibank;
				switch(pibank)
				{
				case 1:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 50000)
						{
							total = diskon15(total);
							cout<<"Anda Mendapat Diskon 15%"<<endl;
							cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";	
						}
						else
						{
							cout<<"Total pembayaran anda : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						break;
				case 2:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 55000)
						{
							total = diskon25(total);
							cout<<"Anda Mendapat Diskon 25%"<<endl;
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						else
						{
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";	
						}
						break;
				case 3:
					cout<<"Masukan CC (16 Digit): "; cin>>CCV;
						if (total > 55000)
						{
							total = diskon25(total);
							cout<<"Anda Mendapat Diskon 25%"<<endl;
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						else
						{
							cout<<"Total Pembayaran : Rp."<<total<<endl;
							grandtot = nol(total);
							cout<<"Kembalian : Rp."<<grandtot<<endl;
							cout<<"Terimakasih";
						}
						break;
				case 4:
					bayaranz:
					cout<<"Total Pembayaran : Rp."<<total;
					cout<<"Bayar : Rp."; cin>>bayar;
					kembalian = returning(bayar, total);
					if (total < bayar)
					{
						cout<<"Kembalian : Rp."<<kembalian<<endl;
						cout<<"Terimakasih";
					}
					else
					{
						cout<<"Jangan Ngutang!"<<endl;
						goto bayaranz;
					}
					break;
			}//punya switch2
		}//punya pilihan2
	else if (pilihan == 3)
	{
		cout<<"Hello world";
		break;
	}

	else
	{
		cout<<"Maaf, Menu Yang Anda masukan Salah, Silahkan Coba Lagi!"<<endl;
		goto awal1;
	}

	}
	return 0;
}