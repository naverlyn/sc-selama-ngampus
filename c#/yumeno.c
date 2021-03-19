#include <stdio.h>


int main()
{
	char nama[50];
	printf("Masukan Nama: ");
	scanf("%[^\n]s", &nama);
	printf("Nama Anda: %s", nama);

	return 0;
}
