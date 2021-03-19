//prosedur 2 tentang luas persegi

program prosedur2;
	uses crt;
		var
			s: real;
	procedure luasPersegi(sisi: real);
	var luas : real;
						
begin
	luas := s * s;
	writeln('Luas Persegi: ', luas:2:0);
end;

begin
	clrscr;
	write('Masukan Sisi Persegi: ');
	readln(s);
	luasPersegi(s);
	readln;
end.