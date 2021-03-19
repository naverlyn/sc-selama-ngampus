//program outout perkalian 5
program out_perkalian_lima;
	uses crt;
		var
			x, i: Integer;
begin

	write('Masukan Angka yg ingin dikali 5: ');
	readln(x);

	//throw here, while i = 1 to what we input, declare
	for i:= 1 to x do 
	begin
		//show up here
		writeln('5 * ', i, ' = ', 5 * i);
	end;
	readln;
end.