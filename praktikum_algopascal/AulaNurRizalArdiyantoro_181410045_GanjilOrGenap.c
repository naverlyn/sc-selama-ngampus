#include <stdio.h>


int genap(int x)
{
	if (x%2==0)
	{
		printf("Bilangan Genap");
	}
	else
	{
		printf("Bilangan Ganjil");
	}
}

int main()
{
	int x;
	printf("Masukan Bilangan: ");
	scanf("%d", &x);
	genap(x);
	return 0;
}