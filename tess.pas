program biasa_saja;
	uses crt;
	var
		menu, menu2: real;
begin
	
	writeln('Menu Utama');
	writeln('1. Kacang');
	writeln('2. Timun');
	writeln('3. Acar');
	writeln('Pilih salah satu diatas : ');
	readln(menu);

	case menu of
		1:
			begin
				writeln('1. Direbus');
				writeln('2. Dioseng');
				readln(menu2);
				case menu2 of
					1:
						readln(menu);
						readln(menu2);
				end;
			end;
	end;
end.