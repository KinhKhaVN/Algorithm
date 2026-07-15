PROGRAM Electricity;


USES crt;

TYPE
  TrangThaiBit = array [1..2] of boolean;

VAR
  X: TrangThaiBit = (true, false);
  Y: TrangThaiBit = (true, false);
  R: boolean;

  i: integer;
  j: integer;

PROCEDURE 
  MachNoiTiep(VAR X, Y: TrangThaiBit; VAR R: boolean);
BEGIN
  Writeln('----------Mach Noi Tiep---------');

  FOR i:= 1 to 2 DO
    FOR j := 1 to 2 DO
      BEGIN
        R := X[i] AND Y[j];
        Writeln('X: ', X[i], ', Y: ', Y[j], ', R = ', R);
      END;
END;

PROCEDURE 
  MachSongSong(VAR X, Y: TrangThaiBit; VAR R: boolean);
BEGIN
  Writeln('----------Mach Song Song---------');

  FOR i:= 1 to 2 DO
    FOR j := 1 to 2 DO
      BEGIN
        R := X[i] OR Y[j];
        Writeln('X: ', X[i], ', Y: ', Y[j], ', R = ', R);
      END;
END;

BEGIN

  MachNoiTiep(X, Y, R);
  MachSongSong(X, Y, R);

END.
