#include<iostream>
#include<string.h>

#define awal using namespace std 

awal;


struct address
{
	char nama[50], alamat[100];
	char nohp[13];
}nab;

int main()
{	
	strcpy(nab.nama, "Aula Nur Rizal A.");
	strcpy(nab.alamat,"Perum Grand Hegar");
	strcpy(nab.nohp, "0895360053095");

	cout<<"Nama : "<< nab.nama <<endl;
	cout<<"Alamat : "<< nab.alamat <<endl;
	cout<<"Nomor HP : "<< nab.nohp << endl;
	system("pause");
	return 0;
}