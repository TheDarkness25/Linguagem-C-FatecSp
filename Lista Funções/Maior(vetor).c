# include <stdio.h>   
int maior(int a[], int tam) {
  int i, maior = a[tam - 1];
  for (i = 0; i < tam - 1; i++) {
    if (a[i] > maior)
      maior = a[i];
  }
  return maior;
}
