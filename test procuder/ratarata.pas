program ratarata;
uses crt;
	var
		a, b, c: Integer;
			function sum(p, q, r : Integer): Integer;
					begin
						sum := p+q+r;				
					end;
				function avg(x, y, z, jum : Integer): real;
					var
								sumD: Integer;
							begin
								sumD := sum(x, y, z);
								avg := sumD / jum;			
							end;
begin
	write('Masukan Nilai A :');
	readln(a);
	write('Masukan Nilai B :');
	readln(b);
	write('Masukan Nilai C : ');
	readln(c);
	writeln('Nilai Rata-Rata', avg(a, b, c, 3):8:2);
end.