//procedure 2 tentang sisi persegi

#include <stdio.h>

void luas(float sisi)
{
	float luas;
	luas = sisi * sisi;
	printf("Luas Persegi: %2.f", luas);
}

int main()
{
	float s;

	printf("Masukan Sisi Persegi: ");
	scanf("%f", &s);

	luas(s);

	return 0;
}