{$mode objfpc}
UNIT Point2DUnit;

INTERFACE
  TYPE
    Point2D = class
    PUBLIC
      x: integer;
      y: integer;
    CONSTRUCTOR New(_x, _y: integer);
    PROCEDURE Print;
    END;

IMPLEMENTATION
  CONSTRUCTOR
    Point2D.New(_x, _y: integer);
    BEGIN
      x := _x;
      y := _y;
    END;

  PROCEDURE
    Point2D.Print;
      BEGIN
        Writeln('(', x, ', ', y, ')');
      END;
END.
