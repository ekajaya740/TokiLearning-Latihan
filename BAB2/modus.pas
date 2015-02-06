var
  n,i,a : longint;
  mx,ans: longint;
  fq    : array [1..1000] of longint;
begin
  readln(n);
  for i := 1 to n do
  begin
    readln(a);
    inc(fq[a]);
  end;
  for i := 1000 downto 1 do
    if (fq[i]>mx) then
    begin
      mx:=fq[i];
      ans:=i;
    end;
  writeln(ans);
end.

