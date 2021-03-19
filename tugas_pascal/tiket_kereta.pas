program pesawat;
uses crt;
	var
		pilihan1, pilihan2, tiket: Byte;
		tot, bayar, qty, sementara : real;
		kettret, kettik : string;
		y : char;
	
begin
	repeat
	clrscr;
	writeln('TIKET PT. KAI Indonesia');
	writeln('Destinasi Perjalanan');
	writeln;
	writeln('1. Jakarta - Jogjakarta');
	writeln('2. Bandung - Jakarta');
	writeln('3. Cirebon - Semarang');
	writeln('4. Bekasi - Surabaya');
	writeln;
	write('Pilih Destinasi Anda : ');
	readln(pilihan1);
		case pilihan1 of
			1:
				begin
					kettret := 'Jakarta - Jogjakarta';
				end;
			2:
				begin
					kettret := 'Bandung - Jakarta';
				end;
			3:
				begin
					kettret := 'Cirebon - Semarang';
				end;
			4:
				begin
					kettret := 'Bekasi - Surabaya';
				end
			else
				begin
				repeat
					clrscr;
					writeln('Maaf, Destinasi Anda Salah');
					write('Ingin Mengulang Kembali ?(Y/N) : ');
					readln(y);
					until upcase(y) <> 'Y';
				end;
			end;
	writeln;
	writeln('Pilih Kelas Tiket');
	writeln;
	writeln('1. Ekonomi Rp. 500.000,-');
	writeln('2. Bisnis Rp. 750.000,-');
	writeln('3. Eksekutif Rp. 900.000,-');
	write('Pilihan Anda : ');
	readln(tiket);
	write('Qty : ');
	readln(qty);
		case tiket of
			1:
				begin
						kettik := 'Ekonomi';
						sementara := qty * 500000;
				end;
			2:
				begin
						kettik := 'Bisnis';
						sementara := qty * 750000;
				end;
			3:
				begin
						kettik := 'Eksekutif';
						sementara := qty * 900000;
				end
			else
				begin
					clrscr;
					writeln('Maaf, silahkan coba lagi');
				end;
			end;
		writeln;
		writeln('Destinasi Kereta Anda : ', kettret);
		writeln('Kelas Tiket : ', kettik);
		writeln('Qty : ', qty:0:0);
		writeln('Grand Total : Rp.', sementara:0:0, ',-');
		write('Bayar : Rp.');
		readln(bayar);
		tot := sementara - bayar;
		writeln('Kembalian : Rp.', tot:0:0, ',-');
		write('Ingin Mengulang Kembali ?(Y/N) : ');
					readln(y);
					until upcase(y) <> 'Y';
end.