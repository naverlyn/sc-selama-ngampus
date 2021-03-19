#include <iostream>

#define awal using namespace std 

awal;

int main()
{
	int a[100];
	int z;
	int jml;

	cout<<"Masukan Data Angka yg ingin diinputkan: "; cin>> z;
	cout<<"=================================================\n";
		for (int i = 0; i < z; i++)
		{
			cout<<"Masukan Nilai Ke-"<<i+1<<": "; cin>>a[i];
		}

	//jumlahin
		jml = 0;
			for (int i = 0; i < z; i++)
			{
				jml = jml + a[i];
				cout<<"Pengulangan Ke-"<<i+1<<": "<<jml-a[i]<<"+"<<a[i]<<"="<<jml<<endl;
			}
	cout<<"Total Keseluruhan: "<<jml<<endl;

	return 0;
}