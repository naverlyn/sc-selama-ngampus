program listrik;
uses crt;
	var
		V, I, R: Integer;
		procedure tegangan(var arus, tahanan, voltase : Integer);
			begin
				voltase := arus * tahanan;
			end;
begin
	write('Masukan OHM : ');
	readln(I);
	write('Masukan Tegangan : ');
	readln(R);
	tegangan(I, R, V);
	writeln('Jumlah Tegangan : ', V, 'Volt');
	readln;
end.