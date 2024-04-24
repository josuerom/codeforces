"""
   author:  josuerom
   created: 23/04/24 16:41:22
"""
import sys
import math

def rli(): return list(map(int, sys.stdin.readline().split()))
def rls(): return list(map(str, sys.stdin.readline().split(r"\s+")))
def rlc(): return sys.stdin.readline().strip()
def rint(): return int(sys.stdin.readline())
def pl(ls): print(' '.join(map(str, ls)))
def plb(ls): print('\n'.join(map(str, ls)))

n, m = rli()
a = [i for i in range(n)]
i = 0
for _ in range(m):
   c, *ln = rlc().split()
   if c.upper().startswith("A"):
      x, sz  = ln[0], len(a)
      if x <= 0:
         x *= 1
         i = math.fabs(i - x)
      elif i + x >= sz:
         i = sz - x
      else:
         i += x
   elif c.upper().startswith("I"):
      pass
   elif c.upper().startswith("E"):
      pass