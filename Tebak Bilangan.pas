program TebakBilangan;
uses crt;
var
	bilangan: Integer;
	y : char;
begin
	repeat
	clrscr;
	write('Masukan sebuah bilangan :');
	readln(bilangan);
	if(bilangan mod 2 = 0) then
		writeln('Bilangan Genap')
	else
		writeln('Bilangan Ganjil');
		writeln('Ingin menginput bilangan kembali ? (Y/N): ');
		readln(y);	
	until upcase(y) <> 'Y';
	
end.