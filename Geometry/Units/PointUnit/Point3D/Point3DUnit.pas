{$mode objfpc}
UNIT Point3DUnit;

INTERFACE
  TYPE
    Point3D = class
    PUBLIC
      x: integer;
      y: integer;
      z: integer;
    CONSTRUCTOR New(_x, _y, _z: integer);
    FUNCTION Distance(CONST p: Point3D): single;
    PROCEDURE Print;
    END;

IMPLEMENTATION
  CONSTRUCTOR
    Point3D.New(_x, _y, _z: integer);
    BEGIN
      x := _x;
      y := _y;
      z := _z;
    END;

  FUNCTION
    Point3D.Distance(CONST p:Point3D): single;
    BEGIN
      exit(sqrt(sqr(x - p.x) + sqr(y - p.y) + sqr(z - p.z)));
    END;
  PROCEDURE
    Point3D.Print;
      BEGIN
        Writeln('(', x, ', ', y, ', ', z, ')');
      END;
END.
