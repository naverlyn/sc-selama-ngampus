program tentmax;
	uses crt;
			var
				a, b: Integer;
	procedure maks;
	begin
		if a > b then
			writeln('a lebih besar dari b')
			else
				writeln('b lebih besar dari a');
	end;
begin
	clrscr;
		write('Masukan nilai a :');
		readln(a);
		write('Masukan nilai b : ');
		readln(b);
		//clrscr;
		maks;
		readln;
end.

