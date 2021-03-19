#include <iostream>

using namespace std;

int main()
{
	int Y;
	int depo=0;
	int awal=4000;
	int withdraw=0;
	int pin=0;
	int menu;
	int transferan;
	int nominal;
	pass:
	cout<<"Masukan Pin Anda : "; cin>>pin;

	if (pin==1234)
	{
		system("CLS");
		cout<<"Berhasil!";
		cout<<"\n";
		menus:
		cout<<"\t\nATM Kita-Kita\n";
		cout<<"1. Cek Saldo\n";
		cout<<"2. Deposit\n";
		cout<<"3. Tarik Tunai\n";
		cout<<"4. Transfer\n";
		cout<<"5. Keluar\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"\nPilih Menu : "; cin>>menu;

		switch(menu)
		{
			case 1:
				cout<<"\nSaldo Anda Sebesar "<<awal;
				//goto menus;
				//break;
				cout<<"\nKembali Ke Menu? 1/0 : ";cin>>Y; 
				if (Y == 1)
				{
					system("CLS");
					goto menus;
				}
				else
				{
					system("CLS");
					cout<<"\nTerimakasih";
					goto pass;
				}

			case 2:
				cout<<"\nNominal Anda Saat Ini : "<<awal;
				cout<<"\nMasukan Nominal : "; cin>>depo;
				awal = awal+depo;
				cout<<"\nNominal Anda Saat Ini : "<<awal;
				cout<<"\n Kembali Ke Menu? 1/0 : "; cin>>Y;
				if (Y == 1)
				{
					system("CLS");
					goto menus;
				}
				else
				{
					system("CLS");
					cout<<"\nTerimakasih";
					goto pass;
				}

			case 3:
				cout<<"Nominal Anda Saat Ini : "<<awal;
				cout<<"\nMasukan Nominal yang anda ingin tarik : ";cin>>withdraw;
				if (withdraw>awal)
				{
					cout<<"\nMaaf, Nominal yang anda masukan lebih banyak daripada saldo anda saat ini, Silahkan coba lagi";
					goto menus;
				}
				else
				{
					awal = awal - withdraw;
					system("CLS");
					cout<<"Berhasil!";
					cout<<"\n";
					cout<<"\nSaldo Anda Saat Ini : "<<awal;
					cout<<"\n Ingin Kembali Ke Menu? 1/0 : "; cin>>Y;
					if (Y == 1)
					{
						system("CLS");
						goto menus;
					}
					else
					{
						system("CLS");
						cout<<"\nTerimakasih\n";
						goto pass;
					}
				}
			case 4:
				cout<<"Nominal Anda"<<awal;
				cout<<"\nMasukan Rekenin Bank Yang Ingin anda Transfer :"; cin>>transferan;
				cout<<"Masukan Nominal : "; cin>>nominal;
					if (awal < nominal)
					{
						cout<<"Maaf, Saldo Anda tidak cukup untuk transfer\n";
						cout<<"\nIngin kembali ke Menu?1/0 : ";cin>>Y;
							if (Y == 1)
							{
								system("CLS");
								goto menus;
							}
							else
							{
								system("CLS");
								cout<<"Terimakasih\n";
								goto pass;
							}
					}
					else
					{
							awal = awal - nominal;
						cout<<"Berhasil Mengirim Uang ke Rekening "<<transferan;
						cout<<"\nIngin kembali ke Menu?1/0 : ";cin>>Y;
							if (Y == 1)
							{
								system("CLS");
								goto menus;
							}
							else
							{
								system("CLS");
								cout<<"Terimakasih\n";
								goto pass;
							}
					}
			case 5:
				cout<<"\nTerimakasih\n";
				system("CLS");
				goto pass;
		}
	}
	else if(pin!=0)
	{
		cout<<"Maaf, Coba Lagi\n";
		goto pass;
	}
	return 0;
}
