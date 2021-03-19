int td(int a, int b, int c)
{
	
}

int jam(int td){
	int a = td / 3600;
	return a;
}

int menit(int sisa){
	int a = sisa / 60;
	return a;
}

int sisa_jam(int td){
	int a = td % 3600;
	return a;
}

j1=jam(td1);
std1=sisa_jam(td1);
m1=menit(std1);
d1=detik(std1);