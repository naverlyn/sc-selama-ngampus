#include <stdio.h>

int luasPersegi(int p, int l)
{
	int luas = p * l;
}

int main()
{
	int p, l;
	printf("Masukan nilai Panjang: ");
	scanf("%d", &p);
	printf("Masukan nilai Lebar: ");
	scanf("%d", &l);
	printf("Hasil : %d", luasPersegi(p, l));
	return 0;
}