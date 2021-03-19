#include <iostream>

using namespace std;

int main()
{
	int A[]={12, 24, 13, 25, 10, 13, 21, 15, 15, 18};
	int bil;
		cout<<"Matrix\n";
		for(int i=0;i<10;i++)
		{ 

			cout<<"|"<<A[i]<<"|";
		}
		cout<<endl;
		cout<<"Angka yang dicari = ";cin>>bil;
			for(int i=0;i<10;i++)
				{
					if(A[i]==bil)
					cout<<"angka yang dicari berada di indeks ke-"<<i<<endl;
				}
	return 0;
}