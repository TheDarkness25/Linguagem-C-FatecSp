# include <stdio.h>   
int resto(int p, int q) {
  while (p >= q)
    p -= q;
  return p;
}
