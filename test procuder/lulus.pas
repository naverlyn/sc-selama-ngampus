program lulusan;
uses crt;
	var
		uts, uas: Integer;


		function avg(x, y : real): real;
			begin
				avg := (x + y)/2;
			end;

		procedure kelulusan(x, y : real);
			var
				nilaiakhir: real;
					begin
						nilaiakhir := avg(x, y);
						writeln('Nilai Akhir : ', nilaiakhir:8:2);			
							if nilaiakhir > 55 then
								writeln('Lulus')
								else
								writeln('Tidak lulus');				
					end;
	
begin
	write('Masukan Nilai UTS : ');
	readln(uts);
	write('Masukan Nilai UAS : ');
	readln(uas);
	kelulusan(uts, uas);
end.