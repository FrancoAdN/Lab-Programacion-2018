PROGRAM oneSix(INPUT,OUTPUT);
VAR
  n:string;
  len,j,a,e,i,o,u:integer;
BEGIN
  writeln('Ingrese un texto (termina en un punto)');
  readln(n);
  len:=pos('.',n);
  if len > 0 then
  begin
    for j := 0 to len do
    begin
      case n[j] of
        'a':
          a:= a + 1;
        'e':
          e:= e + 1;
        'i':
          i:= i + 1;
        'o':
          o:= o + 1;
        'u':
          u:= u + 1;
      end;
    end;
    writeln('La letra "a" aparece ',a,' veces');
    writeln('La letra "e" aparece ',e,' veces');
    writeln('La letra "i" aparece ',i,' veces');
    writeln('La letra "o" aparece ',o,' veces');
    writeln('La letra "u" aparece ',u,' veces');
  end
  else
    writeln('Texto no admitido');

END.
