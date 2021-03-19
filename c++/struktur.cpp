#include <iostream>

using namespace std;

void Proc_TD(int J, int M, int D);

int Func_TD(int J, int M, int D)
{
	int a =(J * 3600) + (M * 60) + D;
	return a;
}

int main()
{
	int V, X, Y, Z;
	cin>>X;
	cin>>Y;
	cin>>Z;
	Proc_TD(X,Y,Z);
	V = Func_TD(X,Y,Z);
	cout<<V;
	return 0;
}

void Proc_TD(int J, int M, int D)
{
	int a =(J * 3600) + (M * 60) + D;
	cout<<a<<endl;
}
