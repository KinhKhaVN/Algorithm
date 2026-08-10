PROGRAM TailRecursive;

USES crt;

VAR
  n, ans: integer;

{Đệ quy đuôi giúp trả về lớp cuối cùng thay vì trả về từng lớp như đệ quy thường}
FUNCTION
  Sum(n: integer; ans: integer): integer;
  BEGIN
    if n = 0 then exit(ans);

    exit(Sum(n - 1, ans + n));
  END;

BEGIN

  CLRSCR;

  n := 100;
  ans := 0;
    
  ans := Sum(n, ans);

  Writeln(ans);

END.
