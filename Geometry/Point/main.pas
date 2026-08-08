PROGRAM Point;

{$UNITPATH ../Units}

USES
    Point2DUnit in '../Units/PointUnit/Point2D/Point2DUnit.pas',
    Point3DUnit in '../Units/PointUnit/Point3D/Point3DUnit.pas';

VAR
  p2D: Point2D;
  new_p2D: Point2D;
  p3D: Point3D;
  new_p3D: Point3D;
BEGIN
  p2D := Point2D.New(1, 1);
  new_p2D := Point2D.New(2, 2);

  p3D := Point3D.New(1, 2, 3);
  new_p3D := Point3D.New(4, 5, 6);

  Writeln('Tadaaaaaaaaaaaaa');
  p2D.Print;
  p3D.Print;

  Writeln;

  Writeln('Distance point 2D');
  Writeln(p2D.Distance(new_p2D):0:2);

  Writeln('Distance point 3D');
  Writeln(p3D.Distance(new_p3D):0:2);
END.
