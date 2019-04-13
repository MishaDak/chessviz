#include "board.h"
#include <stdio.h>
#include <string.h>

extern chartoint(char input[5]);
char input[7];
int x1,y2,y1,Yy;

void scanan()
{
    printf("Введите координаты: ");
    fgets(input, 7, stdin);
    if (chartoint(input)) {
        printf("Правильно\n");
        if (white()){
            move();
        } else{
            printf("Не правильно походил\n");
        }
    } else {
        printf("Не правильно\n");
    }
}

int chartoint(char input[7])
{
    x1 = (int)input[0] - 'A';
    y1 = (int)input[1] - '1';
    x2 = (int)input[3] - 'A';
    y2 = (int)input[4] - '1';
    if ((x2 < 8) && (x2 >= 0) && (y2 >= 0) && (y2 < 8)
        && (x1 >= 0) && (x1 < 8) && (y1 >= 0) && (y1 < 8))
        return 1;
    return 0;
}

int white(){
    if (desk[y1][x1] > 64 && desk[y1][x1 <73) {
        return 0;
    }
    switch (desk[y1][x1]) {
        case 'P':
            if ((desk[y2][x2] == ' ') && (y1 == 1) && (x1 == x2) && (y2 - y1 > 0) && (y2 - y1 < 3)) {
                return 1;
            }
    }
    return 0;
}

void move(){
    desk[y2][x2] = desk[y1][x1];
    desk[y1][x1] = ' ';
}