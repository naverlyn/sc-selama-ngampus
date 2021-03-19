#include <iostream>

using namespace std;

int main()
{
	int a[100], b;
	cout<<"masukan jumlah array: "; cin>>b;
	for (int i = 0; i < b; i++)
		{
		cin>>a[i];
	}

	cout<<"\n Angka yg diinputkan :"<<endl;
	for (int i = 0; i < b; i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}