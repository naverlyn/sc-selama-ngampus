program restoran;
uses crt;
	var
		makanan, minuman, pesanan, pesanan2, pilihan3, pilihan4 : byte;
		jml, tot, totman, totmin, jumqty, bayar, totdis: real;
		ketmkn, ketmin,ketbar, ketdit, lab : string;
begin
	writeln('Kedai Ankel Mutho !');
	writeln('Makanan :');
	writeln('1. Nasi Goreng Rp. 10.000,-');
	writeln('2. Mie Goreng Rp. 8.000,-');
	writeln('3. Sego Kucing Rp. 3.000,-');
	writeln('4. Mie Ayam Rp. 12.000,-');
	writeln('5. Tidak Memesan Makanan');
		write('Pilih Menu Makanan Diatas : ');
		readln(makanan);
		write('Qty : ');
		readln(pesanan);
			case makanan of
			1:
				begin
				ketmkn := 'Nasi Goreng';
					totman := pesanan * 10000;
				end;
			2:
				begin
					ketmkn := 'Mie Goreng';
					totman := pesanan * 8000;
				end;
			3:
				begin
					ketmkn := 'Sego Kucing';
					totman := pesanan * 3000;
				end;
			4:
				begin
					ketmkn := 'Mie Ayam';
					totman := pesanan * 12000;
				end
			else
				begin
					ketmkn := 'Anda Tidak Memesan Makanan';
					totman := 0;
				end;
			end;
				writeln;
				writeln('Minuman :');
				writeln('1. Air Putih Rp. 2.000,-');
				writeln('2. Jus Mangga Rp. 6.000,-');
				writeln('3. Teh Manis Hangat Rp. 3.000,-');
				writeln('4. Es Teh Manis Rp. 3.500,-');
				writeln('5. Tidak Memesan Minuman');
				write('Pilih Menu Minuman Diatas : ');
				readln(minuman);
				write('Qty : ');
				readln(pesanan2);
					case minuman of
						1:
							begin
								ketmin := 'Air Putih';
								totmin := pesanan2 * 2000;
							end;
						2:
							begin
								ketmin := 'Jus Mangga';
								totmin := pesanan2 * 6000;
							end;
						3:
							begin
								ketmin := 'Teh Manis Hangat';
								totmin := pesanan2 * 3000;
							end;
						4:
							begin
								ketmin := 'Es Teh Manis';
								totmin := pesanan2 * 3500;
							end
					else
						begin
							ketmin := 'Anda Tidak Memesan Minuman';
							totmin := 0;
						end;
					end;
					jumqty := pesanan + minuman;
					tot := totman + totmin;
		writeln;
		writeln;
		writeln('Pesanan Anda : ');
		writeln(ketmkn, ' x', pesanan, ' Rp. ', totman:0:0);
		writeln(ketmin, ' x', pesanan2, ' Rp. ', totmin:0:0);
		writeln('Qty : ', jumqty:0:0);
		writeln('-----------------------------------');
		writeln('Grand Total Anda :Rp. ', tot:0:0);
		writeln;
		writeln('Pilih Jenis Pembayaran Anda');
		writeln('1. Kartu Kredit Bank BRI');
		writeln('2. Kartu Kredit Bank MEGA');
		writeln('3. Kartu Kredit Bank bjb');
		writeln('4. Cash');
		write('Pilihan Anda : ');
		readln(pilihan3);
		writeln;
		writeln('-------------------------------');
			case pilihan3 of
							1:
								begin
									ketdit := 'Anda Mendapat Diskon dari Bank BRI sebesar 20%';
									lab := 'Kartu Kredit Bank BRI';
									totdis := tot - (tot * 0.2);
									writeln('Keterangan : ', ketdit);
									writeln('Metode Pembayaran : ', lab);																	writeln('Grand Total : Rp. ', totdis:0:0, ',-');
									write('Bayar : Rp. ');
										readln(bayar);
											jml := bayar - totdis;
									writeln('Kembalian : Rp. ', jml:0:0, ',-');
								end;
							2:
								begin
									ketdit := 'Anda Mendapat Diskon dari Bank MEGA sebesar 15%';
									lab := 'Kartu Kredit Bank MEGA';
									totdis := tot - (tot * 0.15);
									writeln('Keterangan : ', ketdit);
									writeln('Metode Pembayaran : ', lab);
									writeln('Grand Total : Rp. ', totdis:0:0, ',-');
									write('Bayar : Rp.');
										readln(bayar);
											jml := bayar - totdis;
									writeln('Kembalian : Rp. ', jml:0:0, ',-');
								end;
							3:
								begin
									ketdit := 'Anda Mendapat Diskon dari Bank bjb sebesar 5%';
									lab := 'Kartu Kredit Bank bjb';
									totdis := tot - (tot * 0.05);
									writeln('Keterangan : ', ketdit);
									writeln('Metode Pembayaran : ', lab);
									writeln('Grand Total : Rp. ', totdis:0:0, ',-');
									write('Bayar : Rp.');
										readln(bayar);
											jml := bayar - totdis;
									writeln('Kembalian : Rp. ', jml:0:0, ',-');

								end;
							else
								begin
									ketbar := 'Cash';
									writeln('Metode Pembayaran : ', ketbar);
									writeln('Grand Total : ', tot:0:0, ',-');
									write('Bayar : Rp. ');
									readln(bayar);
										jml := bayar - tot;
									write('Kembalian : Rp. ', jml:0:0, ',-');
								end;
							end;
end.