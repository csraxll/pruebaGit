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
  
  STRING_IO_print_result_Sum(x+y);
  STRING_IO_print_result_Mul(x*y);

  STRING_IO_print_exit_message();

  while (i != '0'){
    scanf("%c", &i);
  }
  return 0;
}