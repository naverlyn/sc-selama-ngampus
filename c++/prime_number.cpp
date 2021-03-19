#include <iostream>
using namespace std;


int main()
{
	int a;
		cout<<"Masukkan bilangan yang akan di Cek: ";cin>>a;
		int prima = 1;
			for(int i=2; i<a; i++) 
			{
			if(a % i == 0)
			prima = 0;
			}
				if (prima) 
				{
					cout<<a<<" Adalah bilangan prima "<<endl;
				}
				else 
				{
					cout<<a<<" Bukan bilangan prima "<<endl;
				}
		return 0;
}