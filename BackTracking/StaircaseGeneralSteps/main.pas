PROGRAM Staicase;

USES crt;

CONST
  n = 5;
VAR
  dp: array[0..n] of integer;
  i: integer;

PROCEDURE
  Init;
  BEGIN
    FillChar(dp, SizeOf(dp), 0);
    dp[0] := 1;
  END;

PROCEDURE
  Print;
  BEGIN
    for i := 0 to n - 1 do
      Write(dp[i], ' ');
    Writeln;
  END;
 
PROCEDURE
  Solve(VAR dp: array of integer; CONST k: integer);
  VAR
    i, j: integer;
  BEGIN
    for i := 1 to n do
      BEGIN
        for j := 1 to k do
          BEGIN
            if i - j >= 0 then dp[i] := dp[i] + dp[i - j];
          END;
      END;
  END;

BEGIN

  Init;
  Solve(dp, 3);
  Print;
END.
