	// luas segitiga = L = 2 * (1/2 * a * t)

#include <stdio.h>
int luasSegitiga(int a, int t)
{
	int luasnya = 1/2 * a * t;
	//int luasnya = 2 * (1/2 * a * t);
}

int main()
{
	int a, t;
	printf("Masukan Nilai alas : ");
	scanf("%d", &a);
	printf("Masukan Nilai Tinggi: ");
	scanf("%d", &t);
	printf("===================\n");
	printf("Hasil Luas Segitiga : %d", luasSegitiga(a, t));

	return 0;
}