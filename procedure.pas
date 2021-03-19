program wwwwww;
uses crt;
	var
		LM: byte;
		HK, JML, DISC, BYRAKH : real;
		y : char;
		
procedure BYR(var JM, DSC, BYA : real);
begin
		BYA := JM - DSC;
end;
	
	begin
	repeat
		clrscr;
			write('Lama Menginap : ');
			readln(LM);
			write('Harga Kamar/Hari : ');
			readln(HK);
				JML := LM * HK;
					if JML > 300000 then 
						DISC := JML * 0.3
						else
							if JML > 200000 then
							DISC := JML * 0.2
							else
								if JML > 100000 then
								DISC := JML * 0.1
								else
									DISC := 0;
			BYR(JML, DISC, BYRAKH);
			writeln('Jumlah Bayar : ', JML:3:0);
			writeln;
			writeln('Discount : ', DISC:8:0);
			writeln('Total Bayar Akhir : ', BYRAKH:3:0);
			write('Apakah anda ingin mengulang kembali aplikasi?(Y/N) : ');
			readln(y);  
			until upcase(y) <> 'Y';
	end.