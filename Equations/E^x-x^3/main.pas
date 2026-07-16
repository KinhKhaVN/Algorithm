PROGRAM Equation;

USES crt, math;

VAR
  epsilon: real = 0.000001;
  a, b: real;
  c: real;

  maxIter: integer = 0;

FUNCTION
  F(x: real): real;
  BEGIN
    exit(exp(x) - power(x, 3));
  END;

PROCEDURE
  Solve(VAR a, b: real; VAR maxIter: integer);
  BEGIN

    while (b - a >= epsilon) AND (maxIter <= 100) DO
    BEGIN
      maxIter := maxIter + 1;
      c := (a + b) / 2;
      Writeln('Iter ', maxIter, ': ', F(c));
      IF F(c) > 0 THEN
        a := c
      ELSE
        b := c;
    END;
  END;

BEGIN

  CLRSCR;
  a := 1;
  b := 4;

  Solve(a, b, maxIter);


END.
