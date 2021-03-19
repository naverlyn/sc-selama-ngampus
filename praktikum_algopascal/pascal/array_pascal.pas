//array di pascal
program arra;
	uses crt;
		var
			nilai: array[0..3] of Integer;
	
begin
	clrscr;
	nilai[0]:= 12;
	nilai[1]:= 33;
	nilai[2]:= 44;
	nilai[3]:= 99;

	writeln('isi Array bilangan #1: ', nilai[0]);
	writeln('isi Array bilangan #2: ', nilai[1]);
	writeln('isi Array bilangan #3: ', nilai[2]);
	writeln('isi Array bilangan #4: ', nilai[3]);
	readln;
end.