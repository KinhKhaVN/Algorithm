PROGRAM Staicase;

USES crt;

VAR
  n: integer = 5;
  dp: array[0..5] of integer;

PROCEDURE
  Init;
  BEGIN
    dp[1] := 1;
    dp[2] := 2;
  END;

{BUG}
FUNCTION
  Try(step, n: integer): integer;
  VAR
    res: integer = 0;
    i: integer;
  BEGIN
    if step > n then exit;

    if step = n then
      BEGIN
        inc(res);
        exit;
      END;

      for i := 1 to 2 do
        BEGIN
          if step + i > n then continue;
          Try(step + i ,n);
        END;
      Try := res;
  END;

PROCEDURE
  DynamicProgramming(VAR dp: array of integer);
  VAR
    i: integer;
  BEGIN
    for i := 3 to n do
      dp[i] := dp[i - 1] + dp[i - 2];
  END;
  
BEGIN

  Init;
  DynamicProgramming(dp);

  Writeln(dp[n]);

END.
