PROGRAM AnalysSum;

USES crt;

CONST
  n = 5;

TYPE
  Array2D = array of array of integer;

VAR
  dp: Array2D;
  current, next: array[0..n] of integer;
  L: array[0..n] of integer;
  B: array[1..2, 0..n] of integer;
  x, y: integer;

PROCEDURE
  Init(VAR dp: Array2D);
  VAR
    i: integer;
  BEGIN
    SetLength(dp, n + 1, n + 1);
    dp[0][0] := 1;
    for i := 0 to n do
      dp[i][0] := 1;
  END;

PROCEDURE
  Print(CONST dp: Array2D);
  VAR
    i, j: integer;
  BEGIN
    for i := 0 to n do
      BEGIN
        for j := 0 to n do
          Write(dp[i][j]:3);
        Writeln;
      END;
    Writeln;
  END;

FUNCTION
  Solve(VAR dp: Array2D): integer;
  VAR
    i, j: integer;
  BEGIN
    for i := 1 to n do
      BEGIN
        for j := 1 to n do
          BEGIN
            if i > j then dp[i][j] := dp[i - 1][j]
            else dp[i][j] := dp[i - 1][j] + dp[i][j - i];
          END;
      END;
    exit(dp[n][n]);
  END;

PROCEDURE
  Print(VAR current, next: array of integer);
  VAR
    i: integer;
  BEGIN
    for i := 0 to n do
      Write(current[i]:3);
    Writeln;
    for i := 0 to n do
      Write(next[i]:3);
    Writeln;
  Writeln
  END;

PROCEDURE
  Print(VAR dp: array of integer);
  VAR
    i: integer;
  BEGIN
    for i := 0 to n do
      Write(dp[i]:3);
    Writeln;
  Writeln
  END;

PROCEDURE
  Init(VAR dp: array of integer);
  BEGIN
    FillChar(dp, SizeOf(dp), 0);
    dp[0] := 1;
  END;

FUNCTION
  Solve(VAR current, next: array of integer): integer;
  VAR
    i, j, k: integer;
  BEGIN
    for i := 1 to n do
      BEGIN
        for j := 0 to n do
          BEGIN
            if i > j then next[j] := current[j]
            else next[j] := current[j] + next[j - i];
          END;
          for k := 0 to n do current[k] := next[k];
      END;
    exit(current[n]);
  END;

FUNCTION
  Solve(VAR dp: array of integer): integer;
  VAR
    i, j: integer;
  BEGIN
    for i := 1 to n do
        for j := i to n do dp[j] := dp[j] + dp[j - i];
    exit(dp[n]);
  END;

PROCEDURE
  Print2;
  VAR
    i: integer;
  BEGIN
    for i := 0 to n do
      Write(current[i]:3);
    Writeln;
    for i := 0 to n do
      Write(next[i]:3);
    Writeln;
  Writeln
  END;

PROCEDURE
  Init3;
  BEGIN
    FillChar(B[1], SizeOf(B[1]), 0);
    B[1][0] := 1;
    x := 1;
    y := 2;
  END;

FUNCTION
  Solve3:integer;
  VAR
    i, j: integer;
  BEGIN
    for i := 1 to n do
      BEGIN
        for j := 0 to n do
          BEGIN
            if i > j then B[y][j] := B[x][j]
            else B[y][j] := B[x][j] + B[y][j - i];
          END;
          x := 3 - x;
          y := 3 - y;
      END;
    exit(B[x][n]);
  END;

PROCEDURE
  Print3;
  VAR
    i, j: integer;
  BEGIN
    for i := 1 to 2 do
      BEGIN
        for j := 0 to n do
          Write(B[i][j]:3);
    Writeln;
      END;
    Writeln
  END;

FUNCTION
  Try1(m, v: integer): LongInt;
  BEGIN
    if m = 0 then
      BEGIN
        if v = 0 then exit(1)
        else exit(0);
      END;

    if m > v then exit(Try1(m - 1, v))
    else exit(Try1(m - 1, v) + Try1(m, v - m));
  END;


BEGIN

  Writeln('Solve1');
  Init(dp);
  Solve(dp);
  Print(dp);

  Writeln('Solve2');
  Init(current);
  Solve(current, next);
  Print(current);
  Print(next);

  Writeln('Solve3');
  Init3;
  Solve3;
  Print3;

  Writeln('Solve4');
  Init(L);
  Solve(L);
  Print(L);

  Writeln('Solve5');
  Writeln(Try1(n, n));


END.
