PROGRAM EuclidGCD;

USES crt;


VAR
  a, b: integer;

FUNCTION
  GCD(a, b: integer): integer;
  BEGIN
    Writeln(a, ', ', b);
    if a = b then exit(a);

    if a > b then exit(GCD(a - b, b));

    if b > a then exit(GCD(b - a, a));
  END;

FUNCTION
  GCDMod(a, b: integer): integer;
  VAR c: integer = 0;
  BEGIN

    Writeln(a, ', ', b, ', ', c);
    while (b <> 0) DO
      BEGIN
        c := a mod b;
        a := b;
        b := c;
        Writeln(a, ', ', b, ', ', c);
      END;
      exit(a);
  END;


BEGIN

  CLRSCR;

  a := 12;
  b := 16;

  Writeln('a: ', a);
  Writeln('b: ' ,b);

  Writeln('GCD(a, b): ', GCD(a, b));
  Writeln('GCDMod(a, b): ', GCDMod(a, b));

  Readln();
END.
