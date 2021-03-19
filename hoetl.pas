program hotel;
uses crt;
var
	LM: Byte;
	ket : string;
	BYRAKH, JML, HK : real;
begin
	write('Lama Menginap : ');
	readln(LM);
	write('Harga Kamar/ Hari :');
	readln(HK);
		JML := LM * HK;
			if HK > 300000 then
				BYRAKH := JML - (JML * 0.3) {diskon 30%}
				else
					if HK > 200000 then
						BYRAKH := JML - (JML * 0.2) {diskon 20%}
						else
							if HK > 100000 then
								BYRAKH := JML - (JML * 0.1) {diskon 10%}
								else
									BYRAKH := JML;   {no discount}
										if HK > 300000 then
											ket := 'Anda Mendapatkan Diskon Sebesar 30%'
											else
												if HK > 200000 then
													ket := 'Anda Mendapatkan Diskon Sebesar 20%'
													else
														if HK > 100000 then
															ket := 'Anda Mendapatkan Diskon Sebesar 10%'
															else
																ket := 'Anda Tidak Mendapatkan Diskon';

			writeln('---------------------');
			writeln('Total Harga : ', JML:1:0);
			writeln('Keterangan : ', ket);
			writeln('Total Bayar Akhir : ', BYRAKH:1:0);
			readln;
end.