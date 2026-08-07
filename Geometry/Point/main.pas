PROGRAM Point2Dimension;

{$UNITPATH ../Units}

USES
    PointUnit in '../Units/PointUnit/Point2D/PointUnit.pas';

VAR
  p: Point2D;
  newP: Point2D;

BEGIN
  p := Point2D.New(1, 1);
  newP := Point2D.New(2, 2);

  Writeln('Tadaaaaaaaaaaaaa');
  p.Print;
  newP.Print;

END.
