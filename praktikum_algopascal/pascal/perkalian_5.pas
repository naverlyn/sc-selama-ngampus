//program outout perkalian 5
program out_perkalian_lima;
	uses crt;
		var
			x, i, a: Integer;
			s: Integer;
begin
	//a:= 5;
	//writeln('Angka: ', i);
	write('Masukan Angka yg ingin dikali 5: ');
	readln(x);

	for i:= 1 to x do 
	begin
		writeln('5 * ', i, ' = ', 5 * i);
	end;
	readln;
end.