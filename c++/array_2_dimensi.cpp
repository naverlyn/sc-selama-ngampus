#include <iostream>

using namespace std;

int main()
{
	int a[3][2];

	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin>>a[i][x];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 2; x++)
		{
			cout<<a[i][x];
		}
		cout<<"\n";
	}

	return 0;
}