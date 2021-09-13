# include <stdio.h> 
int fatorial(int n) {
  int i, fat = 1;
  for (i = 1; i <= n; i++) {
    fat *= i;
  }
  return fat;
}
