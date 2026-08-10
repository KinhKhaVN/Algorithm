{$mode objfpc}
UNIT Point2DUnit;


INTERFACE
  USES math;
  TYPE
    Point2D = class
    PUBLIC
      x: integer;
      y: integer;
    CONSTRUCTOR New(_x, _y: integer);
    FUNCTION Distance(CONST p: Point2D): single;
    PROCEDURE Print;
    END;

IMPLEMENTATION
  CONSTRUCTOR
    Point2D.New(_x, _y: integer);
    BEGIN
      x := _x;
      y := _y;
    END;

  FUNCTION
    Point2D.Distance(CONST p: Point2D): single;  
    BEGIN
      exit(sqrt(sqr(x - p.x) + sqr(y - p.y)));
    END;

  PROCEDURE
    Point2D.Print;
      BEGIN
        Writeln('(', x, ', ', y, ')');
      END;
END.
