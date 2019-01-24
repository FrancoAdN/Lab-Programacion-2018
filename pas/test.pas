PROGRAM test(INPUT,OUTPUT);
VAR
  n:string;
BEGIN
  writeln('Ingrese un string');
  readln(n);
  writeln(pos('.',n));
  writeln(n[5]);
END.
