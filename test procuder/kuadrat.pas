program kuadrats;
	uses crt;
		var
			bil: Integer;
			function kuadrat(x : Integer) : integer;
				begin
					kuadrat := x * x;
				end;
begin
	writeln('Masukan Angka : ');
	readln(bil);
	writeln('Akar Kuadrat dari ', bil, 'Adalah', kuadrat(bil));	
end.