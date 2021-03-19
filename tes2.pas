program test2;
const
message = 'Hello, World ';

type
name = string;
var
depan, nickname: name;

begin
        writeln('Masukan Nama : ');
        readln(depan);

        writeln('Masukan Nama Tengah : ');
        readln(nickname);

        writeln;
        writeln(message, '', depan, '', nickname);
end.