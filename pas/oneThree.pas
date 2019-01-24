PROGRAM oneThree (INPUT,OUTPUT);
VAR
  a,b,c,r,raiz:real;
BEGIN
  writeln('Ingrese a: ');
  readln(a);
  writeln('Ingrese b: ');
  readln(b);
  writeln('Ingrese c ');
  readln(c);
  raiz:=b*b-4*a*c;
  if raiz>=0 then
  begin
    r:=(-b+sqrt(raiz))/(2*a);
    writeln('El primer resultado es: ',r:1:2);
    r:=(-b-sqrt(raiz))/(2*a);
    writeln('El segundo resultado es: ',r:1:2);
  end
  else
    writeln('La ecuacion no tiene solucion');
END.
