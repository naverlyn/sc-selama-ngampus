//program LuasLingkaran

#include <stdio.h>

//jadikan float
float LL(float r)
{
	float luas;

	luas = 3.14 * r * r;
	//throw when r have n.
	return(luas);
}

int main()
{
	float luas;
	float l;
	printf("Masukan Nilai R: ");
	scanf("%f", &l);

	//throw R into function,  then declare this.
	luas = LL(l);
	printf("Hasil : %f", luas);
	return 0;
}