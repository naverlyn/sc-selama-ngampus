program koperasii;
	uses crt;
		var
			stok, stok1, stok2, stok3, stok4, stok5, stok6, stok7, stok8, stok9, stok10, stok11 : real;
					n: char;
					z: byte;
			pilkok, pilkok2, pilkok3 : byte;
			id_pel, qty, jumlahan, jumlahan1, kembalian, bayar : real;
			bjb, bri : string[16];
			pass : string[6];
			ket1, ket2: string;
			label
				pertama, kes, kedua;
			procedure atas;
				begin
					writeln('Nama : Aula Nur Rizal Ardiyantoro');
					writeln('Kelas : IF 1C');
					writeln('===================================================');
					writeln;
				end;
			procedure pilihz;
				begin
					if pilkok > 4 then
						clrscr;
						writeln('Maaf, Coba Lagi');
				end;
			procedure makanan;
				begin
					writeln('1. Chitato 750gr Rp. 7.000,- (', stok:0:0, ') pcs');
					writeln('2. Lays 750gr Rp. 10.000,- (', stok1:0:0, ') pcs');
					writeln('3. Taro Rasa Rumput Laur 450gr Rp. 5.000,- (', stok2:0:0, ') pcs');
					writeln('4. Pringles 450gr Rp. 7.500,- ', stok3:0:0, ' pcs');
					writeln('5. Kembali');
				end;
			procedure minyak;
				begin
					writeln('1. Tropical 2L Rp. 21.000,- ', stok4:0:0, 'pcs');
					writeln('2. Tropical 1L Rp. 19.000,- ', stok5:0:0, 'pcs');
					writeln('3. Bimoli 2L Rp. 20.000,- ', stok6:0:0, 'pcs');
					writeln('4. Bimoli 1L Rp. 18.000,- ', stok7:0:0, 'pcs');
					writeln('5. Kembali');
				end;
			procedure minuman;
				begin
					writeln('1. Teh Pucuk Harum 450ml Rp. 5.000,- ', stok8:0:0, 'pcs');
					writeln('2. Floridina 350ml Rp. 4.000,- ', stok9:0:0, 'pcs');
					writeln('3. Tel Bolot Sosro 450ml Rp. 6.000,- ', stok10:0:0, 'pcs');
					writeln('4. Air Putih Aqua 350ml Rp. 2.500,- ', stok11:0:0, 'pcs');
					writeln('5. Kembali');
				end;
			procedure ketmakanan;
				var
					harga: Real;
			begin
				write('Pilih Barang Yang akan Anda beli : ');
				readln(pilkok2);
					case pilkok2 of
						1: begin
							ket2 := 'Chitato';
							harga := 7000;
						end;
						2: begin
							ket2 := 'Lays';
							harga := 10000;
						end;
						3: begin
							ket2 := 'Taro';
							harga := 5000;
						end;
						4: begin
							ket2 := 'Pringles';
							harga := 7500;
						end;
					end;			
				write('Qty : ');
				readln(qty);
					case pilkok2 of
					1: begin
						jumlahan := qty * harga;
						stok := stok - qty;
					end;
					2: begin
						jumlahan := qty * harga;
						stok1 := stok1 - qty;
					end;
					3: begin
						jumlahan := qty * harga;
						stok2 := stok2 - qty;
					end;
					4: begin
						jumlahan := qty * harga;
						stok3 := stok3 - qty;
					end;
				end;
			end;
			procedure ketminyak;
				var
					harga: Real;
			begin
				write('Pilih Barang Yang akan Anda beli : ');
				readln(pilkok2);
					case pilkok2 of
					1: begin
						ket2 := 'Minyak Goreng Tropical 2L';
						harga := 21000;
					end;
					2: begin
						ket2 := 'Minyak Goreng Tropical 1L';
						harga := 19000;
					end;
					3: begin
						ket2 := 'Bimoli 2L';
						harga := 20000;
					end;
					4: begin
						ket2 := 'Bimoli 1L';
						harga := 18000;
					end;				
					//else
						//writeln('Maaf, Coba Lagi');
						//readln;
						//halt;
					end;				
				write('Qty : ');
				readln(qty);			
					case pilkok2 of
					1: begin
						jumlahan := qty * harga;
						stok4 := stok4 - qty;
					end;
					2: begin
						jumlahan := qty * harga;
						stok5 := stok5 - qty;
					end;
					3: begin
						jumlahan := qty * harga;
						stok6 := stok6 - qty;
					end;
					4: begin
						jumlahan := qty * harga;
						stok7 := stok7 - qty;
					end;
				end;
			end;
			procedure ketminuman;
				var
					harga: real;
				begin
					write('Pilih Barang Yang akan Anda beli : ');
					readln(pilkok2);
						case pilkok2 of
							1: begin
								ket2 := 'Teh Pucuk Harum 450ml';
								harga := 5000;
							end;
							2: begin
								ket2 := 'Floridina 350ml';
								harga := 4000;
							end;
							3: begin
								ket2 := 'Teh Botol Sosro 450ml';
								harga := 6000;
							end;
							4: begin
								ket2 := 'Air Putih Aqua 350ml';
								harga := 2500;
							end;
							//else
								//writeln('Maaf, Coba Lagi');
								//halt;
							end;
					write('Qty : ');
					readln(qty);					
						case pilkok2 of
					1: begin
						jumlahan := qty * harga;
						stok8 := stok8 - qty;
					end;
					2: begin
						jumlahan := qty * harga;
						stok9 := stok9 - qty;
					end;
					3: begin
						jumlahan := qty * harga;
						stok10 := stok10 - qty;
					end;
					4: begin
						jumlahan := qty * harga;
						stok11 := stok11 - qty;
						end;
				end;
			end;
				procedure KKK;
				const
					name1 = 'Aula Nur Rizal Ardiyantoro';
					name2 = 'Sugiono';
					name3 = 'Sutarman';
					name4 = 'ID Salah';
					id_001 = name1;
					id_002 = name2;
					id_003 = name3;
					begin
					repeat
						clrscr;
						atas;
						write('Masukan ID Pelanggan : ');
						readln(id_pel);
						if id_pel = 001 then
							writeln('Apakah Benar Nama Anda ', id_001)
							else
								if id_pel = 002 then
								writeln('Apakah Benar Nama Anda ', id_002)
								else
									if id_pel = 003 then
									writeln('Apakah Benar Nama Anda ', id_003)
									else
									writeln('ID Salah');
						write('Jawaban Anda (Y/N) : ');
						readln(n)
						until upcase(n) <> 'N';
					end;	
				procedure ngutang;
					begin
						writeln('Maaf, Harus Uang Pas');
					end;

				procedure create;
					const
						no = '001';
						id_001 = no;
						var
							nama, alamat: String;
							umur : Integer;
					begin
						repeat
						clrscr;
						atas;
						write('Nama Anda : ');
						readln(nama);
						write('Alamat : ');
						readln(alamat);
						write('Umur : ');
						readln(umur);
						writeln('===============================');
						writeln('Nama Anda : ', nama);
						writeln('Alamat : ', alamat);
						writeln('Umur : ', umur);
						write('Apakah Data Diatas sudah benar? Y/N : ');
						readln(n);
						until upcase(n) <> 'N';
						writeln('Kartu Berhasil Dibuat ! Dengan Nama ', nama);
						writeln('ID Anda : ', id_001);
						readln;
						writeln('Kembali Ke Menu? 1/0 : ');
						readln(z);
							if z = 0 then
								halt;
					end;
begin
	stok := 10;
	stok1 := 10;
	stok2 := 10;
	stok3 := 10;
	stok4 := 10;
	stok5 := 10;
	stok6 := 10;
	stok7 := 10;
	stok8 := 10;
	stok9 := 10;
	stok10 := 10;
	stok11 := 10;
	repeat
	pertama:	
	clrscr;	
	atas;
	writeln('Koperasi x');
	writeln('Pilih Bahan Pokok Terlebih Dahulu! :');
	writeln('1. Makanan Ringan');
	writeln('2. Minyak Goreng');
	writeln('3. Minuman');
	writeln('4. Keluar');
	writeln('BARU! 5. Buat Kartu Koperasi Kita');
	write('Pilih Salah Satu : ');
	readln(pilkok);
		case pilkok of
			1: begin
				ket1 := 'Makanan Ringan';
			end;
			2: begin
				ket1 := 'Minyak Goreng';
			end;
			3:	begin
				ket1 := 'Minuman';
			end;
			4: begin
				halt;
			end;
			5: begin
				ket1 := 'Buat Kartu Koperasi Kita (KKK)';
			end;
			else
			pilihz;
			readln;
			halt;
		end;
		write('Apakah Benar Pilihan Anda adalah ', ket1 , ' ? Y/N : ');
		readln(n);
		until upcase(n) <> 'N';
			kedua:
			clrscr;
			atas;

			if pilkok = 1 then
				makanan
				else
					if pilkok = 2 then
					minyak
						else
						if pilkok = 3 then
							minuman
							else
							if pilkok = 4 then
								halt
								else
								create;						
			if pilkok = 1 then
				ketmakanan
				else
					if pilkok = 2 then
					ketminyak
					else
					if pilkok = 3 then
						ketminuman
						else
							goto pertama;
			if pilkok2 = 5 then
				begin
					goto pertama;
					clrscr;
				end;
				
		clrscr;
		atas;
		writeln('Jenis Barang : ', ket1);
		writeln('Nama Barang : ', ket2);
		writeln('Kuantitas : ', qty:0:0, 'pcs');
		writeln('Total Bayar : Rp. ', jumlahan:3:0,',-');
		writeln('Metode Pembayaran :');
		writeln('1. Kartu Koperasi Kita');
		writeln('2. Bank BJB');
		writeln('3. Bank BRI');
		writeln('4. Cash');
		writeln('5. Kembali');
		write('Pilihan Anda : ');
		readln(pilkok3);
			case pilkok3 of
				1: begin
					KKK;
					writeln('============================');
					writeln('Nama Produk : ', ket1);
					writeln('Nama Barang : ', ket2);
					writeln('Qty : ', qty:0:0);
					jumlahan1 := jumlahan - (jumlahan * 0.3);
					writeln('Anda Mendapat Diskon Sebesar 30%');
					writeln('Total Pembayaran Anda : Rp. ', jumlahan1:0:0, ',-');
					kembalian := jumlahan1 - jumlahan1;
					writeln('Kembalian Anda : Rp. ', kembalian:0:0, ',-');
					writeln;
					writeln('Terimakasih Telah Membeli Di Koperasi Kami');
					write('Apakah Anda ingin berbelanja kembali? 1/0 : ');
					readln(z);
						if z = 1 then
							goto pertama
							else
								halt;
				end;
				2: begin
				clrscr;
				atas;
					write('Masukan Kartu kredit/debit anda (16 Digit) : ');
					readln(bjb);
					write('Password : ');
					readln(pass);
					clrscr;
					atas;
					writeln('Terdeteksi Kartu Kredit/Debit BJB');
					writeln('ID Kartu : ', bjb);
					jumlahan1 := jumlahan - (jumlahan * 0.15);
					writeln('Anda Mendapat Diskon Sebesar 15%');
					writeln('Total Pembayaran Anda : Rp. ', jumlahan1:0:0, ',-');
					kembalian := jumlahan1 - jumlahan1;
					writeln('Kembalian Anda : Rp.', kembalian:0:0, ',-');
					writeln;
					writeln('Terimakasih Telah Membeli Di Koperasi Kami');
					writeln('Apakah anda ingin berbelanja kembali? 1/0 : ');
					readln(z);
						if z = 1 then
							goto pertama
								else
									halt;
				end;
				3: begin
				clrscr;
				atas;
					write('Masukan Kartu kredit/debit anda (16 Digit) : ');
					readln(bri);
					write('Password : ');
					readln(pass);
					clrscr;
					atas;
					writeln('Terdeteksi Kartu Kredit/Debit BRI');
					writeln('ID Kartu : ', bri);
					jumlahan1 := jumlahan - (jumlahan * 0.1);
					writeln('Anda Mendapat Diskon Sebesar 10%');
					writeln('Total Pembayaran Anda : Rp. ', jumlahan1:0:0, ',-');
					kembalian := jumlahan1 - jumlahan1;
					writeln('Kembalian Anda : Rp.', kembalian:0:0, ',-');
					writeln;
					writeln('Terimakasih Telah Membeli Di Koperasi Kami');
					writeln('Apakah anda ingin berbelanja kembali? 1/0 : ');
					readln(z);
						if z = 1 then
							goto pertama
								else
									halt;
				end;
				4: begin
					kes:
					clrscr;
					atas;
					writeln('Total Pembayaran Anda : Rp. ', jumlahan:0:0, ',-');
					write('Bayar : Rp. ');
					readln(bayar);						
					if bayar < jumlahan then
							goto kes
						else		
						kembalian := bayar - jumlahan;
					writeln('Kembalian Anda : Rp. ', kembalian:0:0, ',-');
					writeln;
					writeln('Terimakasih Telah Membeli Di Koperasi Kami');
					writeln('Apakah anda ingin berbelanja kembali? 1/0 : ');
					readln(z);
						if z = 1 then
							goto pertama
								else
									halt;
				end;
			end;
		if pilkok3 = 5 then
			goto kedua;
			case pilkok3 of
				6: begin
					halt;
				end;
				else
					halt;
				end;
end.