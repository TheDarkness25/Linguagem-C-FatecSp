# include <stdio.h>  
int potencia(float b, int e) {
  int i;
  float pot = b;
  for (i = 1; i < e; i++) {
    pot *= b;
  }
  return pot;
}
