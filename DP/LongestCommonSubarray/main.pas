PROGRAM LCS;

CONST
  n = 10;

VAR
  L, T: array[0..n + 1] of integer;
  a: array[0..n + 1] of integer = (0, 5, 2, 1, 4, 9, 10, 5, 6, 7, 8, 0);
PROCEDURE
  Init;
  BEGIN
    FillChar(L, SizeOf(L), 0);
    FillChar(T, SizeOf(T), 0);

    a[0] := -32768;
    a[n + 1] := 32767;
    L[n + 1] := 1;
  END;

PROCEDURE
  Solve;
  VAR
    i, j, jmax: integer;
  BEGIN
    for i := n downto 0 do
      BEGIN
        jmax := n + 1;
        
        for j := i + 1 to n + 1 do
          if (a[j] > a[i]) AND (L[j] > L[jmax]) then jmax := j;

      L[i] := L[jmax] + 1;
      T[i] := jmax;
      END;
  END;

PROCEDURE
  Tracing;
  VAR
    i: integer;
  BEGIN
    i := T[0];
    Writeln(L[0] - 2);
    while i <> n + 1 do
      BEGIN
        Write(a[i]:2);
        i := T[i];
      END;
    Writeln;
  END;

PROCEDURE
  Print(VAR A: array of integer);
  VAR
    i: integer;
  BEGIN
    for i := 0 to length(A) - 1 do
      Write(A[i], ' ');
    Writeln;
  END;


BEGIN
  Init;
  Solve;
  Tracing;

  Writeln('a');
  Print(a);
  Writeln('T');
  Print(T);
  Writeln('L');
  Print(L);
END.
