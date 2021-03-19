program pilihan;
	uses crt;
		var
			pil: Integer;
begin
	writeln('Menu Dummy');
	writeln('1. Sample Text');
	writeln('2. Dummy');
	write('Pilih: ');
	readln(pil);

	case pil of
		1: begin	
		write('Sample Text');
	end;
		2:
		begin
			write('Dummy');
		end;
	end;
end.					