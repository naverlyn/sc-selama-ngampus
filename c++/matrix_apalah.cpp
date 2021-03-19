//tes_doang
#include <iostream>

using namespace std;

int main()
{
	int a[100], b[100], c[100], z[100], d;
	int o[100], p[100];
	cout<<"Masukan Jumlah Array: "; cin>>d;

	cout<<"Masukan Array #1:"<<endl;
	for (int i = 0; i < d; i++)
	{
		cin>>a[i];
	}	

	cout<<"Masukan Array #2:"<<endl;
	for (int i = 0; i < d; i++)
	{
		cin>>b[i];
	}

	cout<<"Masukan Array #3:"<<endl;
	for (int i = 0; i < d; i++)
	{
		cin>>c[i];
	}
	cout<<"Masukan Array #4:"<<endl;
	for (int i = 0; i < d; i++)
	{
		cin>>z[i];
	}

	//proses
	for (int i = 0; i < d; i++)
	{

		o[i] = a[i] + c[i];
		p[i] = b[i] + z[i];
	}

	cout<<"\n Output :"<<endl;
	for (int i = 0; i < d; i++)
	{
		cout<<o[i]<<" | "<<p[i]<<" | "<<endl;
	}

	return 0;
}