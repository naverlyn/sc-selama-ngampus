#include <stdio.h>

int main()
{
	int x, i;

	//deklarasi i = 0
	i = 0;

	printf("Masukan Angka: ");
	scanf("%d", &x);

	//rumuskan disini
	do
	{
		//tambah 1
		i++;
		printf("%d\n", i);
	}
	//sampai angka yg ditentukan 
	while (i < x);
	return 0;
}