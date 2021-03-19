program akar;
	uses crt;
		var
			bil: Integer;

			function kuadrat(a : Integer): Integer;
				begin
					kuadrat := a * a;
				end;
begin
	write('Masukan Bilangan : ');
	readln(bil);
	writeln('Bilangan ', bil, ' Jika Dikuadratkan Adalah ', kuadrat(bil));
end.				