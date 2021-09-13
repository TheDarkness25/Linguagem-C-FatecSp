
#include <stdio.h>
#include <string.h>
typedef struct {
    int codigo;
    char nome[21];
    float salario;
} Func;
void troca(Func *p, Func *q) {
   Func x = *p; 
   *p = *q; 
   *q = x; 
}
int cmp_c(Func a, Func b) {
    return a.codigo > b.codigo;
}
int cmp_n(Func a, Func b) {
    return strcmp(a.nome, b.nome)>0;
}
int cmp_s(Func a, Func b) {
    return a.salario > b.salario;
}
void ordena(int (*cmp)(Func, Func), Func v[], int n) {
   for(int i=1; i<=n-1; i++)
      for(int j=0; j<n-i; j++)
         if( cmp(v[j],v[j+1]) )
            troca(&v[j],&v[j+1]);
}
void exibe(Func v[],int n) {
   for(int i=0; i<n; i++)
      printf("{%d, %s, %.2f}\n", v[i].codigo, v[i].nome, v[i].salario);
}
int main(void) {
   Func v[5] = {{561,"Eva Maranhao",9200.00},
                {295,"Ana Teixeira",6100.00},
                {473,"Denise Lagoa",8500.00},
                {102,"Catia Telles",7300.00},
                {384,"Beatriz Lira",5400.00}};
   printf("Ordenar por 1-codigo, 2-nome ou 3-salario? ");
   switch( getchar() ) {
      case '1': ordena(cmp_c,v,5); break;
      case '2': ordena(cmp_n,v,5); break;
      case '3': ordena(cmp_s,v,5); break;
   }
   puts("Tabela ordenada:");
   exibe(v,5);
   return 0;
}
