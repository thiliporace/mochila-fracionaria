#include <stdio.h>

void mochila_fracionaria(int w[], int v[], int n, int capacidade) {
  int i = 0;
  float x[5] = {0,0,0,0,0};
  while (i <= n && capacidade > 0) {
    if (w[i] <= capacidade) {
      x[i] = 1;
      capacidade = capacidade - w[i];
      i = i + 1;
    } else {
      x[i] = ((float) capacidade) / w[i];
      capacidade = 0;
    }
  }
  for(int i =0;i<n;i++){
    printf("\nItem %i",i);
    printf("\n%f",x[i]);
  }
}

int main() {
  int v[5] = {100, 80, 60, 10, 1},n = 5,capacidade;
  int w[5] = {20, 20, 15, 5, 1};
  printf("Digite a capacidade de sua mochila:");
  scanf("%i",&capacidade);
  mochila_fracionaria(w,v,n,capacidade);
}