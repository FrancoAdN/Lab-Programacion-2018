PROGRAM twoFour (OUTPUT);
VAR
  i:integer;
  celsius:array[1..25] of real;
BEGIN
  for i:= 0 to 25 do
  begin
    celsius[i]:=5/9*((i*10)-32);
    writeln('F: ',i*10,'C: ',celsius[i]:5:2);
  end;
END.
