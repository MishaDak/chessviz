#include "board.h"
#include <stdio.h>
#include <string.h>

extern char desk[8][8];
int x1, x2, Y1, y2;

void scanan(int flag) {
  char input[7] = "NULL";
  while (1) {
    while (1) {
      fgets(input, 7, stdin);
      if (chartoint(input)) {
        break;
      }
      printf("Введите заново: ");
    }
    if (flag == 1) {
      if (white() == 1) {
        break;
      } else {
        printf("Введите заново: ");
      }
    }
    if (flag == 2) {
      if (black() == 1){
        break;
      } else {
        printf("Введите заново: ");
      }
    }
  }
}

int chartoint(char input[7]) {
  x1 = (int)input[0] - 'A';
  Y1 = (int)input[1] - '1';
  x2 = (int)input[3] - 'A';
  y2 = (int)input[4] - '1';
  if ((x2 < 8) && (x2 >= 0) && (y2 >= 0) && (y2 < 8) && (x1 >= 0) && (x1 < 8) &&
      (Y1 >= 0) && (Y1 < 8))
    return 1;
  return 0;
}

int white() {
    if (desk[Y1][x1] > 64 && desk[Y1][x1] <73) {
      return 0; //Не рубим свои фигуры
    }
    switch (desk[Y1][x1]) {
    case 'P':
      if ((desk[y2][x2] == ' ') && (Y1 == 1) && (x1 == x2) && (y2 - Y1 > 0) &&
          (y2 - Y1 < 3)) {
        return 1; //Первый ход
      }
      if ((desk[y2][x2] == ' ') && (x2 == x1) && (y2 - Y1 == 1)) {
        return 1; //Ход по пустым клеткам
      }
      if ((desk[y2][x2] > 'a' && desk[y2][x2] < 's') &&
          ((x2 - x1 == 1) || (x2 - x1 == -1)) && (y2 - Y1 == 1)) {
        return 1; // Рубим фигуры опонента
      }
    }
    return 0;
}

int black() {
  if (desk[Y1][x1] > 96 && desk[Y1][x1] < 105) {
    return 0;
  }
  switch (desk[Y1][x1]) {
  case 'p':
    if ((desk[y2][x2] == ' ') && (Y1 == 6) && (x1 == x2) && (Y1 - y2 > 0) &&
        (Y1 - y2 < 3)) {
      return 1; //Первый ход
    }
    if ((desk[y2][x2] == ' ') && (x2 == x1) && (Y1 - y2 == 1)) {
      return 1; //Ход по пустым клеткам
    }
    if ((desk[y2][x2] < 'S' && desk[y2][x2] > 'A') &&
        ((x1 - x2 == 1) || (x1 - x2 == -1)) && (Y1 - y2 == 1)) {
      return 1;
    }
  }
  return 0;
}

void move(){
    desk[y2][x2] = desk[Y1][x1];
    desk[Y1][x1] = ' ';
}