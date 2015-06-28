#include <stdio.h>
#include "STRING_IO.h"

void STRING_IO_print_result_Sum(int r){
  printf("El resultado de la suma es: %d \r\n", r);
}

void STRING_IO_print_result_Mul(int r){
  printf("El resultado de la multiplicacion es: %d \r\n", r);
}

void STRING_IO_print_message(char c){
  printf("Ingrese un numero %c para sumar\r\n", c);
}

void STRING_IO_print_exit_message(){
  printf("Presione la tecla 0 y luego ENTER para salir\r\n");
}