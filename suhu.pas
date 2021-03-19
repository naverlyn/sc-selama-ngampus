program suhus;
uses crt;	
	var
		suhu : Integer;
		procedure Fahrenheit;
			const
				K = 1.8;
				P = 32;
			var
				F: real;
		begin
			F := K * suhu + P;
				writeln('Suhu dalam derajat Fahrenheit : ', F:4:2);					
		end;
		procedure Kelvin;
			const
				K2 = 273.15;
			var
				Klv: real;
		begin
			Klv := suhu + K2;
			writeln('Suhu dalam derajat Kelvin : ', Klv:4:2);
		end;
begin
	clrscr;
		write('Tuliskan suhu dalam derajat celcius : ');
		readln(suhu);
		Fahrenheit;
		readln;
		write('Tuliskan suhu dalam derajat celcius : ');
		readln(suhu);
		Kelvin;
		readln;

end.