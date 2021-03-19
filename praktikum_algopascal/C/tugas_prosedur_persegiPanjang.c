//mencari keliling persegi panjang

#include <stdio.h>

void luaspersegiPanjang(int p, int l)
{
	int total;

	total = 2 * (p + l);

	printf("Luas Persegi Panjang: %d", total);
}

int main()
{
	int panj, leb;

	printf("Masukan Panjang: ");
	scanf("%d", &panj);
	printf("Masukan Lebar: ");
	scanf("%d", &leb);

	luaspersegiPanjang(panj, leb);

	return 0;
}