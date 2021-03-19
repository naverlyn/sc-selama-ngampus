program luas_segitiga;
uses crt;
var
	alas, tinggi : Integer;
	L : real;
	y : char;
begin
	repeat
	clrscr;
		write('Masukan alas segitiga : ');
	readln(alas);
	write('Masukan tinggi : ');
	readln(tinggi);

	L := alas*tinggi/2;
		writeln('Hasil : ', L:8:1);
		writeln('Ingin menginput lagi ? (Y/N) : ');
	readln(y);	
	until upcase(y) <> 'Y';
	
end.