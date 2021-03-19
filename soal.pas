program test_soal;
uses crt;

var
        jawaban : String;
        Aj, Bj, benar, salah : integer;
        score : real;

begin
        benar := 5;
        salah := (-1);
        score := benar + salah;
        clrscr;
        write('Selamat Datang !');
        writeln;

        writeln('Soal !');
        writeln('Tentukan Benar atau Salahnya saja');
        writeln('1.Presiden Indonesia adalah Megawati Soekarnoputri');
        writeln('A. Benar B. Salah');
        writeln('Jawaban : ');
        readln(Aj, Bj);
        if (jawaban = 'A') then score := benar
                else score :=  salah;

        writeln('total skor anda adalah : ', score);
        readln;
end.