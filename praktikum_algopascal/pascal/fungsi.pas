program fungsi;
	uses crt;
		function tambah(a, b: real): real;	
			var
				s: real;

begin
	clrscr;
	s := a + b;
	tambah := s;
end;
		var
			a, b: Real;
begin
	clrscr;
	write('Masukan angka a: ');
	readln(a);
	write('Masukan angka b: ');
	readln(b);
	writeln('Hasil : ', tambah(a, b):10:0);
	readln;
end.