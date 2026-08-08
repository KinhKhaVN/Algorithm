PROGRAM Point;

{$UNITPATH ../Units}

USES
    Point2DUnit in '../Units/PointUnit/Point2D/Point2DUnit.pas',
    Point3DUnit in '../Units/PointUnit/Point3D/Point3DUnit.pas';

VAR
  p2D: Point2D;
  p3D: Point3D;


BEGIN
  p2D := Point2D.New(1, 1);
  p3D := Point3D.New(1, 2, 3);

  Writeln('Tadaaaaaaaaaaaaa');
  p2D.Print;
  p3D.Print;

END.
