# include <stdio.h>   
int divide(int p, int q) {
  int quo;
  for (quo = 0; p >= q; p -= q)
    quo++;
  return quo;
}
