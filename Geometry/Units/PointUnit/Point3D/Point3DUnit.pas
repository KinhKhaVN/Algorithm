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

  PROCEDURE
    Point3D.Print;
      BEGIN
        Writeln('(', x, ', ', y, ', ', z, ')');
      END;
END.
