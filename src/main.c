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
      printf("Чёрные фигуры(Строчные буквы)");
      scanan(2);
      move();
      printdesk();
  }  
    return 0;
}