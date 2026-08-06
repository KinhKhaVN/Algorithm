PROGRAM Staicase;

USES crt;

CONST
  n = 5;
VAR
  dp: array[1..n] of array[1..2] of integer;
  i: integer;

PROCEDURE
  Init;
  VAR
    i: integer;
  BEGIN
    FillChar(dp, SizeOf(dp), 0);

    dp[1][1] := 1;
    dp[2][2] := 1;

  END;

FUNCTION
  Solve(CONST n: integer): integer;
  VAR
    i: integer;
  BEGIN
    if (n = 1) OR (n = 2) then exit(1);
    for i := 3 to n do
      BEGIN
        dp[i][1] := dp[i - 1][2];
        dp[i][2] := dp[i - 2][1] + dp[i - 2][2];
      END;
    exit(dp[n][1] + dp[n][2]);
  END;

PROCEDURE
  Print;
  VAR
    i, j: integer;
  BEGIN
    for i := 1 to n do
      BEGIN
        for j := 1 to 2 do
          Write(dp[i][j]:3);
      Writeln;
      END;
  END;

BEGIN

  Init;
  Solve(n);
  Print;
  Writeln('Number of steps: ', Solve(n));

END.
