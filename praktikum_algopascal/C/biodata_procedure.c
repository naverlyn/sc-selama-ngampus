//procedure biodata (void)

#include <stdio.h>

void biodata()
{
	char nama[20], alamat[20];
	int umur;

	printf("Masukan Nama Anda: ");
	gets(nama);
	printf("Masukan Alamat Anda: ");
	gets(alamat);
	printf("Masukan Umur: ");
	scanf("%d", &umur);

	printf("Nama Anda: %s\n", nama);
	printf("Alamat: %s\n", alamat);
	printf("Umur: %d", umur);
}

int main()
{
	biodata();
	return 0;
}