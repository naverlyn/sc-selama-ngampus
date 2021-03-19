program tugas2;
var
a,b,c : integer;

d : real;

begin
        a:=20;
        b:=10;
        c:= a+b;

        writeln(' line 1 - val of c is ', c);
        c := a - b;
        writeln(' line 2 - val of c is ', c);
        c := a * b;
        writeln(' line 3 - val of d is ', c);
        d := a / b;
        writeln(' line 4 - val of d is ', d:3:2);
        c := a mod b;
        writeln(' line 5 - val of c is ', c);
        c := a div b;
        writeln(' line 6 - val of c is ', c);
        end.