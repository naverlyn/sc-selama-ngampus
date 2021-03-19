program menu;
uses crt;
	var
		LM, menus : byte;
		BYRAKH, JML, HK: real;
begin
	writeln('Lama Menginap : ');
	readln(LM);
	writeln('Harga Kamar/Hari : ');
	readln(HK);
		JML := HK * LM;
			writeln('Total Harga : ', JML:8:0);
			writeln('---------------------------');
			writeln('Pilihan');
			writeln('1. 300000 s/d keatas');
			writeln('2. 200000<Total<=300000');
			writeln('3. 100000<Total<=200000');
			writeln('4. Kebawah s/d 100000');
			writeln('Pilihan Anda : ');
			readln(menus);
		case menus of
			1:
				begin
					BYRAKH := JML - ( JML * 0.3 );
					writeln('Anda Mendapatkan Potongan Diskon sebesar 30%');
			end;
			2:
				begin
					BYRAKH := JML - ( JML * 0.2 );
					writeln('Anda Mendapatkan Potongan Diskon sebesar 20%');
			end;
			3:
				begin
					BYRAKH := JML - ( JML * 0.1 );
					writeln('Anda Mendapatkan Potongan Diskon sebesar 10%');
			end;
			4:
				begin
					BYRAKH := JML;
					writeln('Anda Tidak Mendapatkan Diskon');
			end
		else
			begin
				clrscr;
				writeln('Menu Yang Anda Masukan Salah, Silahkan Coba Lagi.');
			end;
		end;
	writeln('------------------------------------------------------------');
	writeln('Total Bayar Akhir : ', BYRAKH:1:0);
end.