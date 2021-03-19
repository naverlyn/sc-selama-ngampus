program listik;
	uses crt;
		var
			V, I, R: Integer;
				procedure tegang(var arus, tegangan, voltase : Integer);
					begin
						voltase := arus * tegangan;
					end;
	
begin
	write('Masukan Nilai OHM : ');
	readln(I);
	write('Masukan Nilai Tegangannya : ');
	readln(R);
	tegang(I, R, V);
	writeln('Voltasenya adalah ', V, 'Volt');
end. 