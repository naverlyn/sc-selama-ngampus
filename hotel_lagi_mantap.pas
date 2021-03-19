program hoteeeeeeeeeeeeeeeeeeeeeeeeeeeel_lagi_uhh;
uses crt;
	var
		LM, Pilihan: Byte;
		HK, JML, BYRAKH : real;
begin
	clrscr;
	{gotoxy(20, 20); writeln('1');}
	gotoxy(10, 2); write('Lama Menginap : ');
	readln(LM);
	gotoxy(10, 3); write('Harga Kamar/Hari : ');
	readln(HK);
	JML := LM * HK;
	gotoxy(10, 4); writeln('Jumlah Beli : ', JML:8:0);
	writeln;
	gotoxy(10, 6); writeln('Pilihan');
	gotoxy(10, 7); writeln('1. 300000 s/d Keatas');
	gotoxy(10, 8); writeln('2. 200000<JML<=300000');
	gotoxy(10, 9); writeln('3. 100000<JML<=200000');
	gotoxy(10, 10); writeln('4. Kebawah - 100000');
	gotoxy(10, 11); writeln('Pilihan Anda : ');
	gotoxy(25, 11); readln(Pilihan);
	gotoxy(2, 12); writeln('=================================');

	case Pilihan of
		1: begin
			BYRAKH := JML - (JML*0.3);
			writeln('Anda Mendapatkan Potongan Sebesar 30%');
		end;
		2: begin
			BYRAKH := JML - (JML*0.2);
			writeln('Anda Mendapatkan Potongan Sebesar 20%');
		end;
		3: begin
			BYRAKH := JML - (JML*0.1);
			writeln('Anda Mendapatkan Potongan Sebesar 10%');
		end;
		4: begin
			BYRAKH := JML;
			writeln('Anda Tidak Mendapatkan Potongan');
		end
	else
		begin
			clrscr;
			writeln('Pilihan anda salah');
			writeln('Ulangin Sekali Lagi ?');
		end;
	end;
	writeln;
	writeln('-------------------------------------');
	writeln('Total Bayar Akhir : ', BYRAKH:1:0);
	readln;
end.