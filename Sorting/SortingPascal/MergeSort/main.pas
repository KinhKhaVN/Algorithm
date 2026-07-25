PROGRAM MergeSort;

USES crt;

CONST
  n = 5;

VAR
  A: array[0..n - 1] of integer = (11, 2, 23, -2, 0);

PROCEDURE
  Merge(VAR arr: array of integer; 
            left, mid, right: integer);
  VAR
    i, j, k: integer;
    n, m: integer;
    A, B: array of integer;
  BEGIN
    n := mid - left + 1;
    m := right - mid;

    SetLength(A, n);
    SetLength(B, m);

    for i := 0 to n - 1 do
      A[i] := arr[left + i];
    for j := 0 to m - 1 do
      B[j] := arr[mid + 1 + j];

    i := 0;
    j := 0;
    k := left;

    while (i < n) OR (j < m) do
      BEGIN
        if (j = m) OR ((i < n) AND (A[i] < B[j])) then
          BEGIN
            arr[k] := A[i];
            inc(i);
          END
        else
          BEGIN
            arr[k] := B[j];
            inc(j);
          END;
        inc(k);
      END;
  END;

PROCEDURE
  Sort(VAR arr: array of integer;
           left, right: integer);
  VAR
    mid: integer;
  BEGIN
    if left < right then
      BEGIN
        mid := left + (right - left) div 2;
        Sort(arr, left, mid);
        Sort(arr, mid + 1, right);
        Merge(arr, left, mid, right);

      END;
  END;

PROCEDURE
  Print;
  VAR
    i: integer;
  BEGIN
    for i := 0 to n - 1 do
      Write(A[i], ' ');
      Writeln;
  END;

BEGIN
  CLRSCR;

  Sort(A, 0, n - 1);
  Print;

END.
