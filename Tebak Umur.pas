program TebakUmur;
uses crt;
const
	umurku = 23;
	var
		umur: Integer;
	y : char;
begin
	repeat
	clrscr;
	write('Tebak Umurku : ');
	readln(umur);
	if (umur = umurku ) then
		begin
		 	writeln('Benar sekali!');
		 	writeln('Umurku Memang ', umurku, ' Tahun');
		 	{writeln('=================================');}
		 end 
	else
		if umur < umurku then
			writeln('Tidak... umurku lebih tua')
		else
			writeln('Tidak... umurku lebih muda');
			writeln('=================================');
			writeln('Ingin menebak kembali umurku ? (Y/N): ');
			readln(y);	
	until upcase(y) <> 'Y';
	
end.