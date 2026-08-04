PROGRAM AnalysSum;

USES crt;

CONST
  n = 5;
VAR
  dp: array[0..n, 0..n] of integer;
  i: integer;

PROCEDURE
  Init;
  VAR
    i: integer;
  BEGIN
    FillChar(dp[0], SizeOf(dp[0]), 0);
    dp[0][0] := 1;
    for i := 0 to n do
      dp[i][0] := 1;
  END;

PROCEDURE
  Print;
  VAR
    i, j: integer;
  BEGIN
    for i := 0 to n do
      BEGIN
        for j := 0 to n do
          Write(dp[i][j]:3);
        Writeln;
      END;
  END;

FUNCTION
  Solve: integer;
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
  
BEGIN

  Init;
  Solve;
  Print;

END.
