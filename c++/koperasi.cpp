/* aplikasi Koperasi
 * dari pascal convert ke C++
 * menggunakan fungsi
 */

#include <iostream>

using namespace std;


/* cuma pilihan bank */
void bank()
{
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
	int qty, x, y, total, pilihan, harga, pibank, grandtot;
	int bayar, kembalian;
	char nama[40], CCV[16];

	cout<<"Masukan Nama Anda : "; cin>> nama;
	cout<<"Pilih Makanan Ringan"<<endl;
	makanan();
	cout<<endl;
	cout<<"Pilihan Anda : "; cin>>pilihan;
	if (pilihan == 1)
	{
		harga = 5000;
		cout<<"Qty : "; cin>>qty;
		/* jumlahin */
		total = jumlahan(qty, harga);
		garisan();
		//cout<<"Nama Barang : "<<keterangan;
		cout<<"Qty : "<<qty<<endl;
		cout<<"Total Pembayaran Anda : Rp."<<total;
		garisan();
		cout<<"Metode Pembayaran"<<endl;
		banker:
		bank();
		cout<<"Pilih Menu : "; cin>> pibank;
		if (pibank == 1)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			/* kalau semisalnya total yg dibelanjakan
			 * lebih dari 45rb, eksekusi ini
			 */
			if (total > 45000)
			{
				total = diskon15(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 15%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			/* kalau nggak memenuhi syarat diatas, lakukan ini
			 */
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 2)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 65000)
			{
				total = diskon30(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 30%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 3)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 45000)
			{
				total = diskon30(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 30%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 4)
		{
			cout<<"Total Pembayaran : Rp."<<total;
			cout<<"Bayar : Rp."; cin>>bayar;
			kembalian = returning(total, bayar);
			cout<<"Kembalian Anda : Rp."<<kembalian;
			cout<<"Terima Kasih";
		}
		else
		{
			//system("CLS");
			cout<<"Menu yang anda masukan salah!"<<endl;
			goto banker;
		}
	}

	if (pilihan == 2)
	{
		harga = 7500;
		cout<<"Qty : "; cin>>qty;
		total = jumlahan(qty, harga);
		garisan();
		cout<<"Qty : "<<qty<<endl;
		cout<<"Total Pembayaran Anda : Rp."<<total;
		garisan();
		cout<<"Metode Pembayaran"<<endl;
		bank2:
		bank();
		cout<<"Pilih Menu : "; cin>> pibank;
		if (pibank == 1)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 45000)
			{
				total = diskon15(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 15%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 2)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 45000)
			{
				total = diskon30(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 30%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 3)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 45000)
			{
				total = diskon30(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 30%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 4)
		{
			cout<<"Total Pembayaran : Rp."<<total;
			cout<<"Bayar : Rp."; cin>>bayar;
			kembalian = returning(total, bayar);
			cout<<"Kembalian Anda : Rp."<<kembalian;
			cout<<"Terima Kasih";
		}
		else
		{
			cout<<"Menu yang anda masukan salah!"<<endl;
			goto bank2;
		}
	}

	if (pilihan == 3)
	{
		harga = 5500;
		cout<<"Qty : "; cin>>qty;
		total = jumlahan(qty, harga);
		garisan();
		cout<<"Qty : "<<qty<<endl;
		cout<<"Total Pembayaran Anda : Rp."<<total;
		garisan();
		cout<<"Metode Pembayaran"<<endl;
		bank3:
		bank();
		cout<<"Pilih Menu : "; cin>> pibank;
		if (pibank == 1)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 45000)
			{
				total = diskon15(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 15%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 2)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 45000)
			{
				total = diskon30(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 30%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 3)
		{
			cout<<"Masukan CC : "; cin>>CCV;
			if (total > 45000)
			{
				total = diskon30(total);
				garisan();
				cout<<"Anda Mendapat Diskon Sebesar 30%"<<endl;
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
			else
			{
				cout<<"Total Pembayaran Anda : Rp."<<total<<endl;
				grandtot = nol(total);
				cout<<"Kembalian : Rp."<<grandtot;
				cout<<"Terima Kasih";
			}
		}
		if (pibank == 4)
		{
			cout<<"Total Pembayaran : Rp."<<total;
			cout<<"Bayar : Rp."; cin>>bayar;
			kembalian = returning(total, bayar);
			cout<<"Kembalian Anda : Rp."<<kembalian;
			cout<<"Terima Kasih";
		}
		else
		{
			cout<<"Menu yang anda masukan salah!"<<endl;
			goto bank3;
		}
	}
	else
	{
		cout<<"Maaf, Pilihan anda salah, silahkan coba lagi!";
	}
	
	return 0;							
}		
/* switch(pilihan)
	{
		case 1:
			harga = 5000;
			cout<<"Qty : "; cin>>qty;
			total = jumlahan(qty, harga);
			cout<<"Total Pembayaran Anda :Rp. "<<total<<",-";
			cout<<"Bayar : Rp."; cin>>bayar;
			kembalian = returning(total, bayar);
			cout<<"Kembalian Anda : Rp."<<kembalian<<endl;
			cout<<"Terima Kasih";
			break;

		case 2:
			harga = 7500;
			cout<<"Qty : "; cin>>qty;
			total = jumlahan(qty, harga);
			/* kalau semisalnya harga lebih dari 30k, kasih diskon 15% 
			if (total > 30000)
			{
				cout<<"Total Pembayaran :"<<total<<endl;
				total = diskon15(total);
				cout<<"Anda Mendapat Diskon sebesar 15%"<<endl;
				cout<<"Total Pembayaran Anda : "<<total;
			}

			else
			{
				cout<<"Total Pembayaran Anda :"<<total;
			}

		case 3:
			harga = 5500;
			cout<<"Qty : "; cin>>qty;
			total = jumlahan(qty, harga);
			cout<<"Total Pembayaran Anda : "<<total<<endl;
			cout<<"Pilih Metode Pembayaran"<<endl;
			bank();
			cout<<"Pilih Salah Satu : "; cin>>pibank;
			if (pibank == 1)
			{
				cout<<"Masukan CCV : "; cin>>CCV;
				if (total > 30000)
				{
					cout<<"Total Pembayaran : "<<total<<endl;
					total = diskon30(total);
					cout<<"Anda Mendapat Diskon sebesar 30%"<<endl;
					cout<<"Total Pembayaran Akhir : "<<total;	
				}
				else
				{
					cout<<"Total Pembayaran : "<<total<<endl;
				}
			}
		} */
/*if (total > 30000)
		{
			cout<<"Total Pembayaran : "<<total<<endl;
			total = diskon30(total);
			cout<<"Anda Mendapat Diskon sebesar 30%"<<endl;
			cout<<"Total Pembayaran Akhir : "<<total;
		}*/