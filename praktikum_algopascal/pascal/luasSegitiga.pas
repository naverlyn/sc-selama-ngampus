// luas segitiga L = 2 * (1/2 * a * t)

program luasSegitiga;
	uses crt;
		function LS(x, y: Integer): real;

begin
	LS:= 1/2 * (x*y);
end;

	var
		a, t: Integer;
begin
	writeln('Program Luas Segitiga');
	write('Masukan Nilai alas: ');
	readln(a);
	write('Masukan Nilai tinggi: ');
	readln(t);

	writeln('=======================');
	write('Hasil Luas Segitiga: ', LS(a, t):1:0);
	readln;
end.