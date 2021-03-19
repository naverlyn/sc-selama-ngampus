program hotell;
uses crt;
var
	LM: Byte;
	ket : string;
	BYRAKH, JML, HK : real;

begin
	write('Lama Menginap : ');
	readln(LM);
	write('Harga Kamar/Hari : ');
	readln(HK);
		JML := LM * HK;
		if JML > 300000 then
			if HK > 50000 then
				ket := 'Anda Mendapat Diskon'
				else
				ket := 'Anda Tidak Mendapat Diskon';
		if LM > 3 then
			BYRAKH := JML - (JML * 0.3)
			else
			BYRAKH := JML;

		writeln('Total Harga : ', JML:1:0);
		writeln('Keterangan : ', ket);
		writeln('Total Bayar Akhir : ', BYRAKH:1:0);
		readln;
end.