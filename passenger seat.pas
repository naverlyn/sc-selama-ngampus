Program PassengerSeats;
Uses Crt;
Var Seat: array[1..4, 1..7] of boolean;
I, J: integer;
Number: integer;
Word: char;
Begin
ClrScr; TextColor(15);
Writeln(' Wellcome. The seats are numbered as follows:');
Writeln;
Writeln(' 1 A B C D');
Writeln(' 2 A B C D');
Writeln(' 3 A B C D');
Writeln(' 4 A B C D');
Writeln(' 5 A B C D');
Writeln(' 6 A B C D');
Writeln(' 7 A B C D');
Writeln;
Write(' Please chose your seat (Example: 2B ) ');
For I := 1 to 7 do
For J := 1 to 4 do Seat[J,I] := False;
Repeat
Word := ReadKey; GoToXY(40,11); write(' '); GoToXY(41,11);
Write(Word);
Case Word of
'1': Number := 1;
'2': Number := 2;
'3': Number := 3;
'4': Number := 4;
'5': Number := 5;
'6': Number := 6;
'7': Number := 7;
char(27): Halt(1);
end;
Word := Upcase(ReadKey); Writeln(Word); Writeln;
For I := 1 to 7 do
begin
if (Number = I) and (Word = 'A') then Seat[1,I] := True;
if (Number = I) and (Word = 'B') then Seat[2,I] := True;
if (Number = I) and (Word = 'C') then Seat[3,I] := True;
if (Number = I) and (Word = 'D') then Seat[4,I] := True;
end;
TextColor(2);
For I := 1 to 7 do
begin
if (Number = I) and (Word = 'A') then
begin
GoToXY(4,I+2); Write('X');
end;
if (Number = I) and (Word = 'B') then
begin
GoToXY(6,I+2); Write('X');
end;
if (Number = I) and (Word = 'C') then
begin
GoToXY(8,I+2); Write('X');
end;
if (Number = I) and (Word = 'D') then
begin
GoToXY(10,I+2); Write('X');
end;
end;
TextColor(15);
Until Word = char(27)
End.