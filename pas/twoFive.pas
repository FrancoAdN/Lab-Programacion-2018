PROGRAM twoFive (OUTPUT,INPUT);
VAR
  n,binary:integer;
BEGIN
  n:=0;
  writeln('Ingrese el el numero binario de a uno: ');
  repeat
  begin
   read(binary);
   if not (binary >= 2) then
    n := n * 2 + binary;
  end;
  until (binary >= 2);
 writeln('En decimal es: ',n);
END.
