program luasLingkaran;
	uses crt;
		function LL(r: Integer): real;

begin
	LL:= 22/7 * r * r;
end;

	var
		a: Integer;
begin
	writeln('Program Luas Lingkaran');
	write('Masukan Nilai R: ');
	readln(a);
	writeln('=======================');
	write('Hasil Luas Lingkaran: ', LL(a):1:0);
	readln;
end.