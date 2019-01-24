PROGRAM twoTwo(INPUT,OUTPUT);
VAR
  n:string;
  len,i,cont:integer;
BEGIN
  cont:= 0;
  writeln('Ingrese un texto (termina con un punto)');
  readln(n);
  len:=pos('.',n);
  if len > 0 then
  begin
    for i := 0 to len do
    begin
      if ((n[i] = ' ') or (n[i] = ',') or (n[i] = ';')) then
        cont:= cont + 1;
    end;
    writeln('Hay un total de ',cont,' palabras');
  end
  else
    writeln('Texto no admitido');
END.
