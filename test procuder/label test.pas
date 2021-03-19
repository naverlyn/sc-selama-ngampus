program labels;
	uses crt;
		var
			test: Byte;
				label
					balik;
begin
	balik:
		writeln('1. a');
		writeln('2. b');
		write('Choose : ');
		readln(test);
			if test = 2 then
				begin
					goto balik;
				end;
end.						