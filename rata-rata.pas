program ratarata;
	uses crt;
		var
			a, b, c : Integer;
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
	clrscr;
		write('Bilangan pertama : ');
		readln(a);
		write('Bilangan kedua : ');
		readln(b);
		write('Bilangan ketiga : ');
		readln(c);
		write('Rata-rata ketiga bilangan tersebut adalah ', avg(a, b, c, 3):8:2);
		readln;
end.													