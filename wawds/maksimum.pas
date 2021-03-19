program maksimum;
	uses crt;
		var
			a, b: Integer;
				procedure maks;
					begin
						if a > b then
							writeln('A Lebih Besar Dari B ')
							else
							writeln('A Lebih Kecil Dari B ');
					end;
begin
	write('Masukan Bilangan A : ');
	readln(a);
	write('Masukan Bilangan B :');
	readln(b);
	maks;
	readln;
end.