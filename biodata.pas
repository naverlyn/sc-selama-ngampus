program biodata;
uses crt;
var
	nama, alamat : string;
	umur : integer;
	jenis : char;

	y : char;
begin
	repeat
	clrscr;
	writeln('====================================================');
	write('Masukan Nama : ');
	readln(nama);
	write('Jenis Kelamin (L/P) : ');
	readln(jenis);
	write('Alamat : ');
	readln(alamat);
	write('Umur : ');
	readln(umur);

		writeln('====================================================');
		write('Nama : ', nama, '                           ');
		writeln('Jenis Kelamin : ', jenis);
		writeln('Alamat :', alamat);
		writeln('Umur : ', umur);
		write('Ingin menginput lagi ? (Y/N) : ');
		readln(y);	
	until upcase(y) <> 'Y';
	
end.