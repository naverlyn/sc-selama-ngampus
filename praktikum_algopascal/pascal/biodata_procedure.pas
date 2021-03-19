//prosedur biodata

program biodata;
	uses crt;

procedure boi;
	var
		nama, alamat, tgl: string;
		umur: Integer;
begin
	write('Masukan Nama: ');
	readln(nama);
	write('Masukan Alamat: ');
	readln(alamat);
	write('Masukan Tanggal Lahir: ');
	readln(tgl);
	write('Umur Anda: ');
	readln(umur);
	
	writeln('==============================');
	writeln('Nama Anda: ', nama);
	writeln('Alamat: ', alamat);
	writeln('Tanggal Lahir: ',tgl);
	writeln('Umur: ', umur);
end;

begin
	clrscr;
	boi;
	readln;
end.