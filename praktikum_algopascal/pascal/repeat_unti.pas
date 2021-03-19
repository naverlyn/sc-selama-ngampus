program repeat_until;
	uses crt;
		var
			i, n: Integer;
begin
	clrscr;

	//deklarasiin i = 0
	i := 0;
	write('Masukan Angka: ');
	readln(n);

	//throw here
	repeat
		begin
		//i + 1
			i:= i + 1;
			//throw here if the condition passed
			writeln(i);
		end;
		//sampai angka yg dimasukan
	until i = n;
end.					