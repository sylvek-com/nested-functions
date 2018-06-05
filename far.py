"Read and analyze output of the fa.* programs"
import sys
for i in open(sys.argv[1]):
  s=str.split(str.strip(i),':');print("%r" % s)
  l=int(s.pop())
  f=float(s.pop())
  i=int(s.pop())
  print("%r:%r:%r" % (i,f,hex(l)))
