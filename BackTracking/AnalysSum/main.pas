PROGRAM AnalysSum;

USES crt;

CONST
  n = 5;
VAR
  dp: array[0..n, 0..n] of integer;
  current, next: array[0..n] of integer;

PROCEDURE
  Init1;
  VAR
    i: integer;
  BEGIN
    FillChar(dp[0], SizeOf(dp[0]), 0);
    dp[0][0] := 1;
    for i := 0 to n do
      dp[i][0] := 1;
  END;

PROCEDURE
  Print1;
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
  Solve1: integer;
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
  Init2;
  VAR
    i: integer;
  BEGIN
    FillChar(current, SizeOf(current), 0);
    current[0] := 1;
  END;

FUNCTION
  Solve2:integer;
  VAR
    i, j: integer;
  BEGIN
    for i := 1 to n do
      BEGIN
        for j := 0 to n do
          BEGIN
            if i > j then next[j] := current[j]
            else next[j] := current[j] + next[j - i];
          END;
        current := next;
      END;
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
  END;

BEGIN

  Init1;
  Solve1;
  Print1;

  Init2;
  Solve2;
  Print2;

END.
