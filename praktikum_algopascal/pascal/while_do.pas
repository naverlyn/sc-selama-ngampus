program while_do;
uses crt;
	var
		i, x: Integer;

begin
	clrscr;
	write('Masukan Angka: ');
	readln(i);

	write('Masukan Angka #2: ');
	readln(x);

	while i < x do 
	begin
		i:= i + 1;
		writeln(i);
	end;
	readln;
end.				