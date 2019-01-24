PROGRAM oneFive (INPUT,OUTPUT);
VAR
  n:string;
  len,i,cont,words:integer;
  lett,pWord:boolean;
  fLett:char;
BEGIN
  pWord:=false;
  words:=0;
  cont:=0;
  lett:=true;
  writeln('Ingrese un texto (termina con !)');
  readln(n);
  len:=pos('!',n);
  if len > 0 then
  begin
    for i := 0 to len do
    begin
      if lett then
      begin
        if not(n[i] = ' ') and not(n[i] = '.')  and not(n[i] = ',')  and not(n[i] = ';') then
        begin
          fLett := n[i];
          lett:=false;
          pWord:=false;
          writeln(fLett);
          cont:=0;
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
          if (cont >= 2) and not(pWord) then
          begin
            pWord:=true;
            words := words + 1;
          end;
        end;
      end;
    end;
    writeln('La primer letra se vuelve a repetir en ',words,' palabras');
  end
  else
    writeln('Texto no admitido');
END.
