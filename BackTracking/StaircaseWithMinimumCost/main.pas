PROGRAM Staicase;

USES crt;

CONST
  n = 9;
VAR
  dp: array[0..n] of integer;
  cost: array[0..n] of integer = (0, 3, 5, 6, 7, 1, 5, 4, 3, 0);
  i: integer;

PROCEDURE
  Init;
  VAR
    i: integer;
  BEGIN
    dp[0] := 0;
    dp[1] := cost[1];
  END;

FUNCTION
  Min(CONST a, b: integer): integer;
  BEGIN
    if a < b then exit(a)
    else exit(b);
  END;

FUNCTION
  Solve(VAR dp, cost: array of integer): integer;
  VAR
    i: integer;
  BEGIN
    for i := 2 to n do
      dp[i] := min(dp[i - 1], dp[i - 2]) + cost[i];

    exit(dp[n]);
  END;
 
PROCEDURE
  Print(CONST X: array of integer);
  BEGIN
    for i := 0 to n do
      Write(X[i], ' ');
    Writeln;
  END;

BEGIN

  Init;
  Solve(dp, cost);

  Writeln('Cost');
  Print(cost);

  Writeln;

  Writeln('Dp');
  Print(dp);
END.
