#include <stdio.h>


int jml(int a, int b)
{
	return a + b;
}

int main()
{
	int x, y;
	printf("Masukan nilai X : ");
	scanf("%d", &x);
	printf("Masukan nilai Y : ");
	scanf("%d", &y);

	printf("Hasil : %d", jml(x, y));
	return 0;
}