PROGRAM twoThree(INPUT,OUTPUT);
CONST
  D=30;
  M=12;
TYPE
  days =array[1..D] of integer;

VAR
  months : array[1..M] of days;
  rainM:array[1..M] of boolean;
  nRain:array[0..M] of boolean;
  i,j,nCont:integer;
  dia,mes,qua:integer;
  xR,yR,most:integer;
BEGIN
  nCont:=0;
  most:=-100;

  repeat
  begin
    writeln('Ingrese el numero del mes');
    writeln('Si no quiere ingresar ingrese un numero mayor a 13 o menor a 1');
    readln(mes);
    if((mes >= 13) or (mes < 0))then
      break;

    writeln('Ingrese el dia del mes ',mes);
    readln(dia);
    writeln('Ingrese la cantidad (escata 1-10)');
    readln(qua);
    months[mes][dia]:=qua;
  end;
  until ((mes >= 13) or (mes < 0));

  for i := 1 to M do
  begin
    nCont:=0;
    for j := 1 to D do
    begin
      if months[i][j] = 0 then
        begin
        nCont:=nCont+1;
        end;
      if nCont = 30 then
        nRain[i]:=true;


      if months[i][j] >= most then
      begin
        most:=months[i][j];
        xR:=i;
        yR:=j;
      end;
      if(months[i][j] > 0) and (months[i][j+1] > 0) then
        rainM[i]:=true;
    end;
  end;


  for i := 1 to M do
  begin
    if nRain[i] then
      writeln('El mes ',i,' no llovio');

    if rainM[i] then
      writeln('El mes ',i,' llovio mas de un dia seguido');
  end;

  writeln('El dia que mas llovio fue el (m/d): ',xR,'/',yR,' : ',most);


END.
