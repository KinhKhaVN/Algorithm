PROGRAM Collatz;

USES crt;

VAR
  n: integer = 10;

PROCEDURE Solve(n: integer); forward;

PROCEDURE
  SolveEven(n: integer);
  BEGIN
    Write(n, ' div 2 = ');
    Solve(n div 2)
  END;

PROCEDURE
  SolveOdd(n: integer);
  BEGIN
    Write(n, ' *3 + 1 = ');
    Solve(3*n + 1);
  END;

PROCEDURE
  Solve(n: integer);
  BEGIN
    if n = 1 then
      BEGIN
        Write(1);
        exit;
      END;

    Writeln(n);

    if (n mod 2) = 0 then 
      BEGIN
        SolveEven(n)
      END
    else 
      BEGIN
        SolveOdd(n);
      END;
  END;

BEGIN
  CLRSCR;

  Solve(n);
END.
