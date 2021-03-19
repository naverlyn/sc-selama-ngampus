program test_tali;
uses crt;
var
panjang_t, jml, tot : integer;
y : Char;
begin
	repeat
		clrscr;	
			panjang_t := 15;
				writeln('Panjang seutas tali : ', panjang_t, ' Meter');
				write('Masukan Jumlah tali : ');
				readln(jml);
					tot := panjang_t*jml;
				writeln('Panjang ', jml, ' Utas tali adalah ', tot, ' Meter');
					writeln('Ingin Menghitung Panjang tali kembali ? Y/N');
					readln(y);
	until upcase(y) <> 'Y';
end.
