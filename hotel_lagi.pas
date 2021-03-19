program hotel_lagi;
uses crt;
var
	LM : byte;
	y : char;
	ket : string[26];
	HK,JML,BYRAKH : real;
begin
	repeat
		textcolor(black);
		textbackground(cyan);
		clrscr;
		writeln('Nama : Aula Nur Rizal Ardiyantoro');
		writeln('Kelas : IF 1C');
		writeln('===================================');
		textcolor(white);
		write('Lama Menginap        = ');
		readln(LM);
		write('Harga Kamar/Hari     = Rp. ');
		readln(HK);
			JML := LM * HK;
			if JML > 300000 then
				if HK > 50000 then 
					ket := 'Dapat Kartu Diskon.'
				else
					ket := 'Tidak Dapat Kartu Diskon.'
			else
				ket := 'Tidak Dapat Diskon.';
			if LM > 3 then
				BYRAKH := JML - (JML * 0.3)
			else
				BYRAKH := JML;
		writeln;
		writeln('Jumlah Bayar         = Rp. ', jml:1:3, ',-');
		writeln('-----------------------------------');
		writeln('Keterangan           = ', ket);
		writeln('Total Bayar Akhir    = Rp. ', BYRAKH:1:3, ',-');
		writeln('-----------------------------------');
		write('Apakah Anda Ingin Menginap sekali lagi?(Y/N) = ');
		readln(y);	
	until upcase(y) <> 'Y';
	clrscr;
	writeln('=============================================');
	writeln('=                                           =');
	writeln('=                                           =');
	writeln('= Terima Kasih Telah Menginap Di Hotel Kami =');
	writeln('=                                           =');
	writeln('=                                           =');
	writeln('=============================================');
	readln;
end.