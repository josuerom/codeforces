"""
   author:  josuerom
   created: 16/05/24 22:03:57
"""
import sys

def rstr(): return sys.stdin.readline()
def rint(): return int(rstr())
def rli():  return list(map(int, rstr().split()))
def rls():  return list(map(str, rstr().split(r"\s+")))
def rlc():  return list(rstr())
def pl(ls): print(' '.join(map(str, ls)))
def pb(ls): print('\n'.join(map(str, ls)))

n, m = map(int, input().split())
a = [i for i in range(n)]
i, cnt = 0, 0
for _ in range(m):
   ln = rls()
   if ln[0].lower().startswith("a"):
      i += cnt
      k = int(ln[1])
      if k < 0:
         i -= abs(k)
      else:
         i += k
      cnt = 0
   elif ln[0].lower().startswith("i"):
      a.insert(i - 1, int(ln[1]))
      cnt += 1
   elif ln[0].lower().startswith("e"):
      if len(a):
         a.pop(i - 1)
print(a)