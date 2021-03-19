program kuadratbil;
uses crt;
	var
		bil: Integer;
		function kuadrat(x : integer): Integer;
		begin
			kuadrat := x * x;
		end;
	
begin
	clrscr;
		write('Masukan bilangan : ');
		readln(bil);
		write(bil, ' Dikuadratkan = ', kuadrat(bil));
		readln;				
end.