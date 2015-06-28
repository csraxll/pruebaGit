#include <stdio.h>
#include "STRING_IO.h"

int main(){
  char i= 'a';
  int x = 0;
  int y = 0;

  STRING_IO_print_message('X');
  scanf("%d", &x);

  STRING_IO_print_message('Y');
  scanf("%d", &y);
  
  STRING_IO_print_result(x+y);
  
  printf("Presione la tecla 0 y luego ENTER para salir\r\n");
  while (i != '0'){
    scanf("%c", &i);
  }
  return 0;
}