	program tiket_sepur;
	uses crt;
		var
			qty, jurusan, pilihan, pilihan2, pilihan3 : byte;
			tottik, bayar, sementara, jum : real;
			id : real;
			nama, ketdes, kettik, ketdit, ketdis : string;
begin
	clrscr;
		writeln('Pemesanan Tiket Kereta Ojo Nesu, Mas. Ngapuro');
		write('ID KTP Anda : ');
		readln(id);			
				if id < 15 then
							writeln('Maaf')
						else
						if id < 17 then
							writeln('Gud')
							else
							writeln('Maaf');
		write('Nama Anda : ');
		readln(nama);
		writeln;
			writeln('Destinasi Kereta : ');
			writeln('1. Jakarta - Surabaya Pukul 17:00 s/d 01:00');
			writeln('2. Cirebon - Bekasi Pukul 08:00 s/d 13:00');
			writeln('3. Bekasi - Surabaya Pukul 14:00 s/d 02:00');
		write('Pilihan Anda : ');
		readln(pilihan);
			case pilihan of
				1:
						ketdes := 'Jakarta - Surabaya Pukul 17:00 s/d 01:00';
				2:
						ketdes := 'Cirebon - Bekasi Pukul 08:00 s/d 13:00';
				3:
						ketdes := 'Bekasi - Surabaya Pukul 14:00 s/d 02:00';
			else
				clrscr;
					write('Destinasi Anda Salah, Silahkan Coba Lagi');
			end;
			writeln('Pilih Kelas Tiket : ');
			writeln('1. Ekonomi Rp. 500.000,-');
			writeln('2. Bisnis Rp. 750.000,-');
			writeln('3. Eksekutif Rp. 900.000,-');
			write('Pilihan Anda : ');
			readln(pilihan2);
			write('Qty : ');
			readln(qty);
				case pilihan2 of
					1:
						begin
							kettik := 'Ekonomi';
							tottik := qty * 500000;	
						end;
					2:
						begin
							kettik := 'Bisnis';
							tottik := qty * 750000;	
						end;
					3:		
						begin
							kettik := 'Eksekutif';
							tottik := qty * 900000;
						end;
					else
						clrscr;
						writeln('Tiket Anda Salah!');
				end;
	clrscr;
	writeln('ID KTP : ', id:0:0);
	writeln('Nama : ', nama);
	writeln('Destinasi : ', ketdes);
	writeln('Tiket Yang Anda Beli : ', qty);
	writeln('Grand Total : Rp. ', tottik:0:0);
	writeln('Pilih Metode Pembayaran :');
	writeln('1. Kartu Kredit Bank MEGA');
	writeln('2. Kartu Kredit Bank BRI');
	writeln('3. Kartu Kredit Bank bjb');
	writeln('4. Cash');
	write('Pilihan Anda : ');
	readln(pilihan3);
		case pilihan3 of
			1:
				begin
					ketdit := 'Kartu Kredit Bank MEGA';
					ketdis := 'Anda Mendapatkan Diskon Sebesar 20%';
						sementara := tottik - ( tottik * 0.2 );
					writeln('Metode Pembayaran : ', ketdit);
					writeln('Keterangan : ', ketdis);
					writeln('Grand Total : Rp. ', sementara:0:0);
					write('Bayar : Rp. ');
					readln(bayar);
						if bayar < jum then
							writeln('Maaf, Harus Membayar dengan harga yang seharusnya')
						else
							jum := sementara - bayar;
							writeln('Kembalian Anda : Rp. ', jum:0:0);
				end;
			2:
				begin
					ketdit := 'Kartu Kredit Bank BRI';
					ketdis := 'Anda Mendapatkan Diskon Sebesar 15%';
						sementara := tottik - ( tottik * 0.15);
					writeln('Metode Pembayaran : ', ketdit);
					writeln('Keterangan : ', ketdis);
					writeln('Grand Total : ', sementara:0:0);
					writeln('Bayar : Rp. ');
						readln(bayar);
							if bayar < jum then
								writeln('Maaf, Harus Membayar dengan harga yang seharusnya')
							else
								jum := sementara - bayar;
			
							writeln('Kembaian Anda : Rp. ', jum:0:0);
				end;
			3:
				begin
					ketdit := 'Kartu Kredit Bank bjb';
					ketdis := 'Anda Mendapatkan Diskon Sebesar 10%';
						sementara := tottik - ( tottik * 0.1);
					writeln('Metode Pembayaran : ', ketdit);
					writeln('Keterangan : ', ketdis);
					writeln('Grand Total : ', sementara:0:0);
					writeln('Bayar : Rp. ');
						readln(bayar);
							if bayar < jum then
								writeln('Maaf, Harus Membayar dengan harga yang seharusnya')
							else
								jum := sementara - bayar;
			
							writeln('Kembaian Anda : Rp. ', jum:0:0);
				end
			else
				begin
					sementara := tottik;
					writeln('Grand Total : ', tottik:0:0);
					write('Bayar : Rp. ');
					readln(bayar);
						if bayar < jum then
							writeln('Maaf, Harus Membayar dengan harga yang seharusnya')
						else
							jum := sementara - bayar;
						writeln('Kembalian Anda : Rp. ', jum:0:0);
				end;
		end;
end.								