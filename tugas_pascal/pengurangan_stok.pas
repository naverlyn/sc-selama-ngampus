program Untitled;
	const
		stok = 12;
	var
		y : byte;
		a: Integer;
		ini : real;
			label
				ya;
begin
	ya:
	writeln('Stock ada', stok);
	write('Masukan Nilai : ');
	readln(a);
	ini := stok - a;
	writeln(ini:0:0);
	write('Lagi? 1/0: ');
	readln(y);
		if y = 1 then
			goto ya;
end.