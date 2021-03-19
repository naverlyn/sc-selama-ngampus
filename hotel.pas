program hotel;
uses crt;
var
	LM : byte;
	ket : string[25];
	HK, jml, byrakh : real;
	y : char;

	begin
		repeat
			clrscr;
				writeln('Nama : Aula Nur Rizal Ardiyantoro');
				writeln('Kelas : 1C');
				writeln;
				writeln('===============================');
				write('Lama Menginap : ');
				readln(LM);
				write('Harga Kamar/Hari : ');
				readln(HK);
				jml := LM*HK;
					if jml > 300000 then
						byrakh := jml - (jml*0.3)
					else
						if jml > 200000 then
							byrakh := jml - (jml*0.2)
						else
							if jml > 100000 then
								byrakh := jml - (jml*0.1)
							else
								byrakh := jml;
									if jml > 100000 then
										ket:= 'Anda Mendapat Diskon'
									else
						ket := 'Tidak Mendapat Diskon';
					writeln;
						writeln('====================================');
						writeln('Jumlah Bayar      = ', jml:14:0);
						writeln('Keterangan        = ', ket);
						writeln('Total Bayar Akhir = ', byrakh:14:0);
						write('Apakah Anda ingin menginap kembali? (Y/N) : ');  
												readln(y);
			until upcase(y) <> 'Y';
			clrscr;
			writeln('Terima Kasih');
			readln;
end.