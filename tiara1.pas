program calc;
var
a,b,c :integer;
d: real;

begin
    a:=25;
    b:=09;
    c:=a+b;

    writeln(' Line 1 - val of c is ', c);
    c := a - b;
    writeln(' Line 2 - val of c is ', c);
    c := a * b;
    writeln(' Line 3 - val of c is ', c);
    c := a / b;
    writeln(' Line 4 - val of c is ', c);
    c :=a mod b;
    writeln(' Line 5 - val of c is ', c);
    c : a div b;
    writeln(' Line 6 - val of c is ', c);

end