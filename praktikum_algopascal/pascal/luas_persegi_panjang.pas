//luas persegi panjang
program luas;
	uses crt;
		var
			p, l: Integer;
			tot : integer;
	
begin
		writeln('Menghitung Luas Persegi Panjang');
		write('Masukan Nilai P : ');
		readln(p);
		write('Masukan Nilai L : ');
		readln(l);

		tot := p * l;

		writeln('---------------------------------');
		writeln('Hasil : ', tot);
end.