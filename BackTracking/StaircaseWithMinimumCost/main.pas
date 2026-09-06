PROGRAM Staicase;

USES crt;

CONST
  n = 9;
  LARGE = 10000;
VAR
  dp: array[0..n] of integer;
  p, path: array[0..n] of integer;
  cost: array[0..n] of integer = (0, 3, 5, 6, 7, 1, 5, 4, 3, 0);
  i: integer;

PROCEDURE
  Init;
  VAR
    i: integer;
  BEGIN
    dp[0] := 0;
    dp[1] := cost[1];

    FillChar(p, SizeOf(p), 0);
    p[0] := -1;
  END;

FUNCTION
  Min(CONST a, b: integer): integer;
  BEGIN
    if a < b then exit(a)
    else exit(b);
  END;

FUNCTION
  Solve_From_1_To_2_Steps(VAR dp, cost: array of integer): integer;
  VAR
    i: integer;
  BEGIN
    Init;
    for i := 2 to n do
      dp[i] := Min(dp[i - 1], dp[i - 2]) + cost[i];

    exit(dp[n]);
  END;
 
FUNCTION
  Solve_From_1_To_K_Steps(VAR dp, cost: array of integer; CONST k: integer): integer;
  VAR
    i, j, z: integer;
    x: integer;
  BEGIN
    Init;
    for i := 1 to n do
      BEGIN
        dp[i] := LARGE;
        for j := 1 to k do
          BEGIN
            if i - j >= 0 then
              BEGIN
                if dp[i - j] + cost[i] < dp[i] then
                  BEGIN
                    dp[i] := dp[i - j] + cost[i];
                    p[i] := i - j;
                  END;

              END;
          END;
      END;

    x := n;
    while x <> -1 do
      BEGIN
        Write(x, ' ');
        x := p[x];
      END;
    Writeln;
  END;

PROCEDURE
  Print(CONST X: array of integer);
  BEGIN
    for i := 0 to n do
      Write(X[i], ' ');
    Writeln;
  END;

PROCEDURE
  PrintPath(CONST path: array of integer);
  BEGIN
    for i := n downto 0 do
      Write(path[i], ' ');
    Writeln;
  END;
BEGIN

  Solve_From_1_To_2_Steps(dp, cost);

  Writeln('-----From 1 to 2 steps-----');
  Writeln('Cost');
  Print(cost);
  Writeln;
  Writeln('Dp');
  Print(dp);

  Writeln;

  Solve_From_1_To_K_Steps(dp, cost, 2);
  Writeln('-----From 1 to k steps-----');
  Writeln('Cost');
  Print(cost);
  Writeln;
  Writeln('Dp');
  Print(dp);

  Writeln('-----Path-----');
  Print(p);

END.
