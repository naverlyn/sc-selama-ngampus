program Untitled;
	uses crt;
		var
			a: Integer;
				function test(b : Integer): real;
						const
							discount = 0.3;
					begin
						test := b - (b * discount);
					end; 
begin
	write('Masukan Harga : ');
	readln(a);
	writeln('potongan harga 30%');
	writeln('Hasil : ', test(a):0:0);
end.