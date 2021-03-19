program operators;
	uses crt;
		var
			i, j: Integer;
			tot, tot2, tot3, tot4, tot5: Integer;
	
begin
	
	write('Masukan Nilai I: ');
	readln(i);
	write('Masukan Nilai J: ');
	readln(j);

	tot := i + j;
	tot2 := i - j;
	tot3 := i * j;
	tot4 := i mod j;
	tot5 := i div j;

	writeln('---------------------------------------');
	writeln('|     Operasi      |   Hasil Operasi  |');
	writeln('---------------------------------------');
	writeln('|      ', i, ' + ', j, '       |         ', tot, '        |');
	writeln('|      ', i, ' - ', j, '       |         ', tot2, '        |');
	writeln('|      ', i, ' * ', j, '       |         ', tot3, '        |');
	writeln('|      ', i, ' Mod ', j, '     |         ', tot4, '        |');
	writeln('|      ', i, ' Div ', j, '     |         ', tot5, '        |');
	writeln('---------------------------------------');
end.