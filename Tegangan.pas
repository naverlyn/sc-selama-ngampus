program tgangan;
uses crt;
	var
		V, I, R: Integer;
		procedure Tegangan(var arus, tahanan, voltase : integer);
		begin
			voltase := arus * tahanan;				
			end;
begin
	clrscr;
		write('Masukan Tahanan(OHM) : ');
		readln(R);
		write('Masukan Kuat Arus (Ampere) : ');
		readln(I);
		Tegangan(I, R, V);				//parameter aktual
		write('Tegangan yang dihasilkan : ', V, ' Volt');
		readln;
end.						