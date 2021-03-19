#include <stdio.h>

int main()
{
	int i, n;

	printf("Masukan Angka: ");
	scanf("%d", &n);

	//deklarasiin i = 0
	i = 0;
	//throw here
	while (i < n)
	{
		//tambahin i + n, misal n dimasukan 10, nanti keluar dari angka 1 - 10
		i++;
		//throw here
		printf("%d\n", i);
	}
	//yes
	return 0;
}