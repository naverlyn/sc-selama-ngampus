#include <iostream>
using namespace std;



int data[30], data2[30];
int n;


//buat alat penukarannya
int tukar(int a, int b)
{
	int t;
	t = data[b];			//t = isi data dari int b
	data[b] = data[a];		// data b adalah data dari a
	data[a] = t; 			//letakan data a didalam variabel t
}

//buat sortirnya
int insertion_sort()
{
	int temp, i, j;					//temp = sementara
	for (int i = 0; i <= n; i++)
	{
		temp = data[i];				//isi variabel temp adalah data dari i
		j = i - 1;						
		while(data[j] > temp && j >= 0)		//selagi isi data j kurang dari sementara dan j kurang dari sama dengan 0
		{
			data[j+1] = data[j];		//data j ditambah 1, lalu letakan didalam data j
			j--;						
		}
		data[j+1] = temp;				//letakan kembali data j+1 tadi kedalam var sementara
	}
}

int main()
{
	cout<<"Masukkan Jumlah Data : "; cin>>n;
		for (int i = 1; i <= n; i++)
		{
			cout<<"Masukkan data ke "<<i<<" : ";
			cin>>data[i];
			data2[i] = data[i];
		}
	insertion_sort();

		cout<<"Data Setelah di Sort : ";
			for (int i = 1; i <=n; i++)
			{
				cout<<" "<<data[i];
			}

 return 0;

}					