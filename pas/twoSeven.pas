PROGRAM twoSeven(OUTPUT);

CONST
  N=256;

VAR
  a:ARRAY[1..N] of boolean;
    i,j,m:word;

BEGIN
 for i:=1 TO N do
    a[i]:=TRUE;
 m:=trunc(sqrt(N));
 for i:=2 to m do
 begin
   if a[i] then
     for j:=2 to N DIV i do a[i*j]:=FALSE;
 end;
 for i:=1 to N do
 begin
    if a[i] then
      writeln(i:4);
 end;
END.
