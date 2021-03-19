program lulusan;
uses crt;
	var
		uts, uas: real;
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
	clrscr;
		write('Nilai UTS : ');
		readln(uts);
		write('Nilai UAS : ');
		readln(uas);
		kelulusan(uas, uts);
		readln;
end.