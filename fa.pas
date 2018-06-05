program h(output);
var
  i,n: integer;
  f: real;
function fa(x: integer): real;
  procedure fb(y: integer);
    procedure fc(z: integer);
    begin
      if z > 1 then
        begin
          fa := fa * y;
          y := y - 1;
          fc(y)
        end
    end;
  begin
    fa := 1.0;
    fc(y)
  end;
begin
 fb(x)
end;

begin
  n := 10;
  for i := 0 to n do
    begin
      f := fa(i);
      writeln(i:2,f:16,f:8:0)
    end
end.
