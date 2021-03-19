program edmodo;
uses crt;
	var
		NAMAMHS, ket, NIM : string;
		NILAIPAS : integer;
		huruf : Char;
		{ket : string;
				huruf : sting;} {deprecated}

		begin
			clrscr;
				write('Nomor Induk Mahasiswa : ');
				readln(NIM);
				write('Nama Mahasiwa : ');
				readln(NAMAMHS);
				write('Nilai Pascal : ');
				readln(NILAIPAS);

				if NILAIPAS > 85 then
					huruf := 'A'
					else
						if NILAIPAS > 70 then
							huruf := 'B'
							else
								if NILAIPAS > 55 then
								huruf := 'C'
								else
									if NILAIPAS > 40 then
									huruf := 'D'
								else
									huruf := 'E';
										if NILAIPAS > 85 then
											ket := 'Anda Lulus'
										else
											if NILAIPAS > 70 then 
											ket := 'Anda Lulus'
											else
												if NILAIPAS > 55 then 
												ket := 'Anda Lulus'
												else
													if NILAIPAS > 40 then 
													ket := 'Anda Lulus'
													else
														ket := 'GAGAL';
				writeln;
				writeln('================================='); 
				writeln('Nomor Induk Mahasiswa = ', NIM);
				writeln('Nama Mahasiwa = ', NAMAMHS);
				writeln('Nilai Pascal = ', NILAIPAS);
				writeln('Mutu Huruf = ', huruf);
				writeln('Keterangan = ', ket);
				readln;



		end.