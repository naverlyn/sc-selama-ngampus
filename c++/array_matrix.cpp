//array matrix
#include <iostream>

using namespace std;

int main()
{
	int a[100], b[100], c[100], d;
	cout<<"Masukan Jumlah Array: "; cin>>d;
	

	cout<<"Masukan Array #1: "<<endl;
	for (int i = 0; i < d; i++)
	{
		cin>>a[i];
	}

	cout<<"Masukan Array #2:"<<endl;
	for (int i = 0; i < d; i++)
	{
		cin>>b[i];
	}

	/* prosesin */
	for (int i = 0; i < d; ++i)
	{
		c[i] = a[i] + b[i];
	}

	cout<<"\n Angka yg diinputkan :"<<endl;
	for (int i = 0; i < d; i++)
	{
		cout<<c[i]<<endl;
	}

	return 0;
}