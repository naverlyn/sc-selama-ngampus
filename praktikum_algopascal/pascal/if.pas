program if_ajjah;
	uses crt;
		var
			a: Integer;
			ket: string;
begin
	
	write('Masukan nilai A: ');
	readln(a);
	if a > 10 then
		write('Nilai lebih dari 10')
		else
		if a > 5 then
			write('Nilai lebih dari 5')
			else
				write('Nilai lebih kecil dari 5 atau 10');
end.