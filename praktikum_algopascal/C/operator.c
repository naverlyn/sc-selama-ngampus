//operator
#include <stdio.h>

int main()
{
	int i, j;
	int tot, tot2, tot3, tot4, tot5;

	printf("Masukan Nilai I: ");
	scanf("%d", &i);
	printf("Masukan Nilai J: ");
	scanf("%d", &j);

	tot = i + j;
	tot2 = i - j;
	tot3 = i * j;
	tot4 = i / j;
	tot5 = i % j;

	printf("---------------------------------------\n");
	printf("|     Operasi      |   Hasil Operasi  |\n");
	printf("---------------------------------------\n");
	printf("|     %d + %d", i, j);
	printf("	   | 	    %d", tot);
	printf("	      |\n");
	printf("|     %d - %d", i, j);
	printf("	   | 	    %d", tot2);
	printf("	      |\n");
	printf("|     %d * %d", i, j);
	printf("	   | 	    %d", tot3);
	printf("	      |\n");
	printf("|     %d Mod %d", i, j);
	printf("	   | 	    %d", tot4);
	printf("	      |\n");
	printf("|     %d Div %d", i, j);
	printf("	   | 	    %d", tot5);
	printf("	      |\n");
	printf("---------------------------------------\n");
	return 0;
}