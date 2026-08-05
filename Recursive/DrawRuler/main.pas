PROGRAM DrawARuler;

USES crt;

VAR
  mm: real;
  cm, len: integer;

PROCEDURE
  ForLoop;
  BEGIN
    for cm := 1 to len do
      BEGIN
        mm := 0.1;
        Writeln('. ', cm);
        BEGIN
          repeat
            Writeln('- ', mm:0:1);
            mm := mm + 0.1;
          until mm >= 0.95
        END;
      END;
  END;

BEGIN
  CLRSCR;

  len := 3;
  ForLoop;

END.
