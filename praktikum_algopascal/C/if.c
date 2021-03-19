#include <stdio.h>

int main()
{
	int a, b;

	printf("Masukan Nilai A: ");
	scanf("%d", &a);

	printf("Masukan Nilai B: ");
	scanf("%d", &b);

	if (a == 5)
	{
		if (a < b)
		{
			printf("A anda lebih kecil dari B");
		}
		else
		{
			printf("A anda lebih besar dari B");
		}
	}
	else
		if (a > b)
		{
			printf("A anda lebih besar dari B");
		}
		else
		{
			printf("A anda lebih kecil dari B");
		}
	return 0;
}