#include <stdio.h>

void luasLingkaran(float r)
{
	float Pi;
	Pi = 3.14;
	float total;

	total = Pi * r * r;

	printf("Luas Lingkaran: %2.f", total);
}

int main()
{
	float jari;

	printf("Masukan Jari-Jari: ");
	scanf("%f", &jari);

	luasLingkaran(jari);

	return 0;
}