PROGRAM twoOne (OUTPUT,INPUT);
VAR
  n,suma,prom:real;
  i:integer;
BEGIN
  suma:=0;
  prom:=0;
  i:=0;
  repeat
  begin
    i := i+1;
    writeln('Ingrese el numero: ');
    read(n);
    suma:=suma+n;
  end;
  until (n = 0);
  prom:=suma/(i-1);
  writeln('La suma de los numeros es:',suma:5:2);
  writeln('El promedio de los numeros es:',prom:5:2);
END.
