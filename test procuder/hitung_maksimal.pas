program hitung;
	uses crt;

		var
			a, b: Integer;

		procedure max;
			begin
				if a > b then
					writeln('A Lebih besar dari B')
					else
					if a < b then
						writeln('A Lebih kecil dari B');	
			end;
begin
	write('Masukan Nilai A :');
	readln(a);
	write('Masukan Nilai B : ');
	readln(b);
	max;
end.		