program suhus;
	uses crt;
		var
			suhu: Integer;

			procedure kelvin;
				const
					K = 273.15;
						var
							Klv: real;
					begin
						Klv := suhu + K;
							writeln('Suhu dari celcius ke kelvin adalah : ', Klv:0:2);
					end;
begin
	write('Masukan Suhu Dalam Celsius : ');
	readln(suhu);
	kelvin;
end.