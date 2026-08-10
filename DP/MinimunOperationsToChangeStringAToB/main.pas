PROGRAM MinimumOperations;

CONST
  n = 7;

VAR
  A, B: string;
  dp: array[0..n, 0..n] of integer;

PROCEDURE
  Init;
  BEGIN
    A := 'abc';
    B := 'ab';
  END;

FUNCTION
  min2(VAR a, b:integer): integer;
  BEGIN
    if a < b then exit(a)
    else exit(b)
  END;

FUNCTION
  min3(VAR a, b, c:integer): integer;
  VAR
    tmp: integer;
  BEGIN
    tmp := min2(a, b);

    exit(min2(tmp, c));
  END;

PROCEDURE
  Solve;
  VAR
    i, j: integer;
    na, nb: integer;
  BEGIN
    na := length(A);
    nb := length(B);

    for i := 0 to na do
      BEGIN
        for j := 0 to nb do
          BEGIN
            if (i = 0) OR (j = 0) then 
            BEGIN
              dp[i][j] := i + j;
              continue;
            END;

            if A[i] = B[j] then dp[i][j] := dp[i - 1][j - 1]
            else
              dp[i][j] := min3(dp[i - 1] [j - 1],
                               dp[i]     [j - 1],
                               dp[i - 1] [j]) + 1;
          END;
      END;
  END;

PROCEDURE
  Print;
  VAR
    i, j: integer;
    na, nb: integer;
  BEGIN
    na := length(A);
    nb := length(B);

    for i := 0 to na do
      BEGIN
        for j := 0 to nb do
          Write(dp[i][j]:3);
      Writeln;
      END;
  END;

 PROCEDURE
  Tracking;
  VAR
    i, j: integer;
  BEGIN
    i := length(A);
    j := length(B);

    while (i > 0) AND (j > 0) do
      BEGIN
        if A[i] = B[j] then
          BEGIN
            Writeln('Dont do anything');
            Writeln(A[i], ' ', B[j]);
            dec(i);
            dec(j);
            continue;
          END;
        {Change}
        if (i = j) AND (A[i] <> B[j]) then
          BEGIN
            Writeln('Change ', A[i], ' to ', B[j]);
            Writeln(A[i], ' ', B[j]);
            dec(i);
            dec(j);
            continue;
          END;

        {Add}
        if i < j then
          BEGIN
            Writeln('Add: ', B[j]);
            Writeln(A[i], ' ', B[j]);
            dec(j);
            continue;
          END;

        if i > j then
          BEGIN
            Writeln('Delete: ', A[i]);
            Writeln(A[i], ' ', B[j]);
            dec(i);
            continue;
          END;
      END;
  END;

BEGIN
  Init;
  Solve;
  Print;
  Tracking;
END.
