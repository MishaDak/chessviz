#include "board.h"
#include <stdio.h>
#include <string.h>

extern char desk[8][8];
int X1, X2, Y1, Y2;

void scanan(int flag)
{
    char input[7] = "NULL";
    while (1) {
        while (1) {
            fgets(input, 7, stdin);
            if (chartoint(input)) {
                break;
            }
            printf("Введите заново:");
        }
        if (flag == 1) {
            if (white() == 1) {
                break;
            } else {
                printf("Введите заново:");
            }
        }
        if (flag == 2) {
            if (black() == 1) {
                break;
            } else {
                printf("Введите заново:");
            }
        }
    }
}

int chartoint(char input[7])
{
    X1 = (int)input[0] - 'A';
    Y1 = (int)input[1] - '1';
    X2 = (int)input[3] - 'A';
    Y2 = (int)input[4] - '1';
    if ((X2 < 8) && (X2 >= 0) && (Y2 >= 0) && (Y2 < 8) && (X1 >= 0) && (X1 < 8)
        && (Y1 >= 0) && (Y1 < 8))
        return 1;
    return 0;
}

int white()
{
    if (desk[Y1][X1] > 64 && desk[Y1][X1] < 73) {
        return 0; //не рубим своих
    }
    switch (desk[Y1][X1]) {
        case 'P':
            if ((desk[Y2][X2] ==
    (Y1 == 1)
        ) && (Y2 - Y1 > 0)
                && (Y2 - Y1 < 3)) {

            альный ход

             if ((desk[Y2][X2] == ' ') && (X2 ==
        Y
                      return 1; //ход по пустым клеткам

            ((desk[Y2][X2] > 'a' && desk[Y2][X2] < 's')

        (
         || (X2 - X1 == -1)) && (Y2 - Y1 == 1)) {

            n 1; //рубим чужих
            }
    }
    return 0;
}
int
            (desk[Y1][X1] > 96 && desk[Y1][X1
              return 0;
    }
    switch (desk[Y1][X1]) {
        case 'p':
            if ((desk[Y2][X2] == ' ') && (Y1 == 6) && (X1 == X2) && (Y1


        1 - Y2 < 3)) {
                return 1; //начальный ход

            ((desk[Y2][X2] == '
             && (Y1 - Y2 == 1)) {

        х
        клеткам
            }
            if ((desk[Y2][X2] < 'S' &&
            A')
                && ((X1 - X2 == 1) || (X1 - X2
        1
        {
                return 1;
            }


void move()
{
    desk[Y2][X2] = desk[Y1][X1];
    desk[Y1][X1] = ' ';
}