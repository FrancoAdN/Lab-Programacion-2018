PROGRAM suma (OUTPUT);
VAR
  i,resul:integer;
BEGIN
  resul:=0;
  for i:= 0 to 10 do
    resul:= resul + i;
  writeln(resul);
END.
