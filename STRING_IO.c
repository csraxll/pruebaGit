#include <stdio.h>
#include "STRING_IO.h"

void STRING_IO_print_result(int r){
  printf("El resultado es: %d \r\n", r);
}

void STRING_IO_print_message(char c){
  printf("Ingrese un número %c para sumar\r\n", c);
}