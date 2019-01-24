PROGRAM oneTwo (INPUT,OUTPUT);
CONST
  cantD= 999;
VAR
  datos: array[1..cantD] of real;
  i,n:integer;
BEGIN
  datos[0]:=-10000000;
  for i:= 1 to cantD do
    begin
      writeln('Ingrese el dato ',i);
      readln(datos[i]);
      n:= i;
      if(datos[i] < datos[i-1]) then
        break;
    end;
    writeln('El ingreso de datos termino en el indice: ',n);
END.
