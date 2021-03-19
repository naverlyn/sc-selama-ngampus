program temperatur;
uses crt;
	var
		suhu: Integer;

		procedure Kelvin;
			const
				K = 273.15;
			var
				Klv: real;
		begin
			Klv := suhu + K;
			writeln('Suhu dalam derajat Kelvin : ', Klv:4:2);
		end;
	
begin
	write('Masukan Angka Derajat dalam celcius : ');
	readln(suhu);
	kelvin;
	readln;
end.