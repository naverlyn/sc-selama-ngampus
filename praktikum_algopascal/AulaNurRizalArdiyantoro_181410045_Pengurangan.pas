program pengurangan_function;
	uses crt;
		function kurang(a, b:Integer): Real;

begin
	kurang := a - b;
end;
	var
		x, y: Integer;
begin
	writeln('Kurang');
	write('Masukan Nilai A: ');
	readln(x);
	write('Masukan Nilai B: ');
	readln(y);
	writeln('=================');
	write('Hasil : ', kurang(x, y):1:0);
	readln;
end.