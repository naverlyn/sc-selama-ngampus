program wasd;
	uses crt;
		var
			uhm: byte;
			stok, stok1, jml, qty, price, bayar, kembalian : real;
			ket : string;
			y : byte;
				procedure atasan;
					begin
						writeln('1. Minuman', stok:0:0, 'pcs');
						writeln('2. Makanan', stok1:0:0, 'pcs');
					end;
				procedure minumanhabis;
					begin
						writeln('1. Minuman sudah habis terjual');
						writeln('2. Makanan', stok1:0:0, 'pcs');
					end;
				procedure makananhabis;
					begin
						writeln('1. Minuman', stok:0:0, 'pcs');
						writeln('2. Makanan sudah habis terjual');
					end;
				procedure duaduanyahabis;
					begin
						writeln('1. Minuman sudah habis terjual');
						writeln('2. Makanan sudah habis terjual');
					end;
					label
						atasyeet;
begin

	stok := 10;
	stok1 := 10;
	atasyeet:	
	clrscr;
		if stok = 10 then
			atasan
			else
				if stok1 = 10 then
				atasan
				else
						if stok <0 then
							minumanhabis
							else
								if stok1 < 0 then
									makananhabis
									else
										duaduanyahabis;

	writeln('Masukan : ');
	readln(uhm);
		case uhm of
			1:
				begin
					ket:= 'Minuman';
					price := 5000;
				end;
			2:
				begin
					ket:= 'Makanan';
					price:= 5000;
				end;
			end;
		write('Qty : ');
		readln(qty);
			case uhm of
				1:
					begin
						jml := price * qty;
						stok := stok - qty;
					end;
				2:
					begin
						jml := price * qty;
						stok1 := stok1 - qty;
					end;
				end;
			writeln('Nama : ', uhm);
			writeln('Jenis : ', ket);
			writeln('Total : Rp. ',jml:0:0);
			writeln('Bayar : Rp.');
			readln(bayar);
			kembalian := bayar - jml;
			writeln('Kembalian : Rp.',kembalian);
			write('Kembali ke menu? 1/0: ');
			readln(y);
				if y = 1 then
					goto atasyeet;
end.								