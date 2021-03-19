program stok;
uses crt;
var
jml, tmbh, krg, kode : integer;
pil:char;
begin
clrscr;
write('Masukan jumlah stok awal barang = ');
readln(jml);

repeat;
clrscr;
writeln('Total jumlah stok barang = ',jml);
writeln;
writeln('Menu Pilihan :');
writeln;
writeln('1. tambah stok');
writeln('2. kurangi stok');
writeln('3. keluar');
writeln;
write('pilihan = ');
readln(kode);
writeln;

case kode of
1:begin
write('Jumlah stok yang ditambah = ');
readln(tmbh);
jml:=jml+tmbh;
end;
2:begin
write('Jumlah stok yang dikurangi = ');
readln(krg);
jml:=jml-krg;
end;
3:begin
exit;
end;
end;

if (kode=1) then pil:='1' else
if (kode=2) then pil:='2' else
writeln('Pilihan hanya 1 - 3');
readln(pil);
until (pil='1') or (pil='2');

end.