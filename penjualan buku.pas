program sewa_buku;
uses crt;
var
	jml, lama, denda : integer; 
	sewa: Longint;
	y : char;
begin
	repeat
	clrscr;
	denda :=0;
	write('Jumlah buku yg disewa : ');
	readln(jml);
	write('Lama disewa : ');
	readln(lama);
	if lama>7 then denda :=jml*1500;
	sewa := (jml*35000) + denda;
	writeln('Harga Sewa : ','Rp.', sewa, ',-');
	write('Ingin mengulang kembali ?(Y/N) : ');
	readln(y); 	
	until upcase (y) <> 'Y';
	
	
end.