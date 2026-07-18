PROGRAM TailRecursive;

USES crt;

VAR
  n, ans: integer;

FUNCTION
  Sum(n: integer; ans: integer): integer;
  BEGIN
    if n = 0 then exit(ans);

    exit(Sum(n - 1, ans + n));
  END;

BEGIN

  CLRSCR;

  n := 100;
  ans := 0;

  ans := Sum(n, ans);

  Writeln(ans);

END.
