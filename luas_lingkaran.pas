program LL;
uses Crt;
Const
        phi = 3.14;
var
        r, L : real;
y : char;
begin
		repeat
			clrscr;
				writeln('Menghitung Luas Lingkaran');
					write('Masukan Jari-Jari Lingkaran : ');
						readln(r);
							L := phi*r*r;
						writeln('Luas Lingkaran adalah : ', L:8:2);
							writeln('Ingin menghitung luas Lingkaran lagi ? Y/N');
							readln(y);
                {readln;}
		until upcase(y) <> 'Y';
end.