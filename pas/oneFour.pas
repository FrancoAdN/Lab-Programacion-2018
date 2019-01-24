PROGRAM oneFour(INPUT,OUTPUT);
VAR
  x,y,r:real;
BEGIN
  writeln('Ingrese x: ');
  read(x);
  writeln('Ingrese y: ');
  read(y);
  r:=Exp(y*Ln(x));
  writeln('El resultado de la potencia es: ',r:5:2);
END.
