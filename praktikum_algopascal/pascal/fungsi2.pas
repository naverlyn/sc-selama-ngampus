program fungsi2;
	uses crt;
		function luas(a, b: Integer): Integer;

begin
	luas:= a + b;
end;
	var
		x, y: Integer;
	
begin
	clrscr;
	writeln('Program hitung luas');
	writeln;
	write('Masukan Nilai X : ');
	readln(x);
	write('Masukan Nilai Y : ');
	readln(y);

	writeln('===============');
	writeln('Hasil Luas : ', luas(x, y));
	readln;
end.