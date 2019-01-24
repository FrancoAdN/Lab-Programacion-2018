PROGRAM oneFive (INPUT,OUTPUT);
VAR
  n:string;
  len,i,cont:integer;
  lett:boolean;
  fLett:char;
BEGIN
  cont:=0;
  lett:=false;
  writeln('Ingrese un texto (termina con !)');
  readln(n);
  len:=pos('!',n);
  if len > 0 then
  begin
    fLett:=n[0];
    for i := 0 to len do
    begin
      if lett then
      begin
        if not(n[i] = ' ') and not(n[i] = '.')  and not(n[i] = ',')  and not(n[i] = ';') then
        begin
          fLett := n[i];
          lett:=false;
        end
      end
      else
      begin
        if(n[i] = ' ') or (n[i] = '.')  or (n[i] = ',')  or (n[i] = ';') then
          lett := true
        else
        begin
          if n[i] = fLett then
            cont := cont + 1;
        end;
      end;
    end;
    writeln('La primer letra se vuelve a repetir en ',cont,' palabras');
  end
  else
    writeln('Texto no admitido');
END.
