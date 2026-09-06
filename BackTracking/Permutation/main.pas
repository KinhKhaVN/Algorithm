PROGRAM Permutation;

VAR
  n: integer;
  A: array[0..3] of char;
  isVisited: array[0..3] of boolean;
  choose: boolean;

PROCEDURE
  Init;
  BEGIN
    n := 3;
    A[0] := 'A';
    A[1] := 'B';
    A[2] := 'C';
    FillChar(isVisited, SizeOf(isVisited), false);
  END;

PROCEDURE
  Try(s: string); 
  VAR
    i: integer;
  BEGIN
    choose := false;
    Writeln(s);
    for i := 0 to n - 1 do
      if isVisited[i] = false then
        BEGIN
          isVisited[i] := true;
          Try(s + A[i]);
          isVisited[i] := false;
          choose := true;
        END;

     if NOT choose then
       BEGIN
         Writeln;
         Writeln('----------Ok----------');
         Writeln(s);
         Writeln;
       END;
  END;

PROCEDURE
  Print;
  VAR
    i: integer;
  BEGIN
    for i := 0 to n - 1 do
      Writeln(isVisited[i]);
  END;

BEGIN

  Init;
  Try('');


END.
