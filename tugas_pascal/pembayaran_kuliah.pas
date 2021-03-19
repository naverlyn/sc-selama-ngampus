program pembayaran_kuliah;
uses crt;

	var
		pilihan : byte;
		nama, npm, ket: string;
		total, sementara, jumlahan, bayar, grandtot : real;
begin
	write('Nama : ');
	readln(nama);
	write('NPM : ');
	readln(npm);
	writeln('Pilih Salah Satu Pembayaran');
	writeln('1. SKS');
	writeln('2. DPP');
	writeln('3. DPK');
	write('Pilih Salah Satu Diatas : ');
	readln(pilihan);
		case pilihan of
		1:
			begin
				ket := 'Pembayaran SKS';
				total := 1600000;
			end;
		2:
			begin
				ket := 'Pembayaran DPP';
				total := 2400000;
			end;
		3:
			begin
				ket := 'Pembayaran DPK';
				total := 3000000;
			end;
		else
			begin
				ket := 'Maaf, coba lagi';
			end;
		end;
	writeln('Nama : ', nama);
	writeln('NPM : ', npm);
	writeln('Jenis Pembayaran : ', ket);
	writeln('Total Yang Harus Dibayarkan : Rp.', total:0:0, ',-');
	write('Bayar : Rp. ');
	readln(bayar);
	grandtot := total - bayar;
		if grandtot < 1599999 then 
			writeln('Telah Dibayar LUNAS')
		else
			writeln('Anda Masih ada tunggakan senilai Rp.', grandtot:0:0, ',-');
end.									