#include <stdio.h>

int main()
{
	char pil;
	int price; 
	int out;

	printf("Menu Dummy:\n");
	printf("A. Rp.100.000,-\n");
	printf("B. Rp.5.000,-\n");
	printf("============\n");
	printf("Pilihan Anda: ");
	scanf("%s", &pil);
	switch(pil)
	{
		case 'A' : price = 100000;
		break;

		case 'B' : price = 5000;
		break;
	}
	out = price;
	printf("Rp.%d", out);
	return 0;
}