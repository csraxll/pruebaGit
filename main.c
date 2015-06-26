#include <stdio.h>

int main(){
  char i= 'a';
  int x = 0;
  int y = 0;

  printf("Ingrese un número X para sumar\r\n");
  scanf("%d", &x);

  printf("Ingrese un número Y para sumar\r\n");
  scanf("%d", &y);
  
  printf("El resultado es: %d \r\n", (x+y));
  
  while (i != '0'){
    scanf("%c", &i);
  }
  return 0;
}