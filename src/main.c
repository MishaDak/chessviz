#include <stdio.h>
#include "board.h"
#include "board_print_plain.h"

int main()
{
  printdesk();
  while (1) {
      printf("Белые фигуры(Заглавные буквы): ");
      scanan(1);
      move();  
      printdesk();
      scanan();
  }  
    return 0;
}