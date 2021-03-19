#include<iostream>
#include<string.h>



struct address{
	char jalan[50], desa [50], kec[50];
};

int main(){
	struct address alamat;
	
	strcpy(alamat.jalan,"Blok Desa RT09 RT02");
	strcpy(alamat.desa,"Blok Desa RT09 RT02");
	strcpy(alamat.kec,"Blok Desa RT09 RT02");
	
	std::cout << alamat.desa << std::endl;
	
	return 0;
}