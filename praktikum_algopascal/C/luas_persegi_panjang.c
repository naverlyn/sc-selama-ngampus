//luas persegi panjang
#include <stdio.h>



int main()
{
	int p, l;
	int tot;

	printf("Menghitung Luas persegi panjang\n");
	printf("Masukan Nilai P: ");
	scanf("%d", &p);
	printf("Masukan Nilai L: ");
	scanf("%d", &l);

	tot = p * l;

	printf("----------------------------------");
	printf("\nHasil: %d", tot);

	return 0;
}