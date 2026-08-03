PROGRAM Staicase;

USES crt;

CONST
  n = 5;
VAR
  dp, memo: array[0..n] of integer;
  i: integer;

PROCEDURE
  Init;
  VAR
    i: integer;
  BEGIN
    for i := 0 to n do dp[i] := -1;

    dp[1] := 1;
    dp[2] := 2;
  END;

FUNCTION
  Try(VAR dp: array of integer; i: integer): integer;
  VAR
    step: integer;
  BEGIN
    if (i = 1) OR (i = 2) then exit(i);

    if dp[i] <> -1 then exit(dp[i]);

    step := Try(dp, i - 1) + Try(dp, i - 2);

    dp[i] := step;

    exit(step);
  END;
  
BEGIN

  Init;
  Try(dp, n);

  for i := 0 to n do
    Writeln(dp[i]);

END.
