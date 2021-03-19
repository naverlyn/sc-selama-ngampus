program
const
message = 'Hello, bapal ';

type
name = string;
var
depan, nickname: name;

begin
        writeln('Masuk Nama : ');
        readln(nickname);

        writeln;
        writeln(message, '', depan, '', nickname);
end.