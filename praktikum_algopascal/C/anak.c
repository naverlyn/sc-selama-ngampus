#include <stdio.h>

int main()
{
	int jml_anak;
	char gol, nama;
	float upah_kotor, upah_bersih, persen_tunjangan;

	printf("Nama: ");
	scanf("%s", &nama);

	printf("Gol (A - D) : ");
	scanf("%s", &gol);

	printf("Jumlah Anak : ");
	scanf("%d", &jml_anak);

	switch(gol)
	{
		case 'A': upah_kotor = 1000000;
		break;

		case 'B': upah_kotor = 800000;
		break;

		case 'C': upah_kotor = 600000;
		break;

		case 'D': upah_kotor = 400000;
		break;
	}

	if (jml_anak > 2)
	{
		persen_tunjangan = 0.3;
	}
	else
	{
		persen_tunjangan = 0.2;
	}

	upah_bersih = upah_kotor - (upah_kotor * persen_tunjangan);

	printf("Upah: %2.f", upah_bersih);

	return 0;
}