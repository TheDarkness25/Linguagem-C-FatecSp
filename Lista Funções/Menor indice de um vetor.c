int menor_ind(int a[], int tam) {
  int i, menor = tam - 1;
  for (i = 0; i < tam - 1; i++) {
    if (a[i] < a[menor])
      menor = i;
  }
  return menor;
}
