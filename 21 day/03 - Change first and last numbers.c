// Copyright 2022 finchren
#include <stdio.h>

int main() {
    char array[4];
    char temp;
    for (int i = 0; i < 4; i++) {
        scanf("%c", &temp);
        array[i] = temp;
    }
    if (array[0] == '-') {
        printf("-%c%c%c", array[3], array[2], array[1]);
    } else {
        printf("%c%c%c", array[2], array[1], array[0]);    
        }
    return 0;
}

/*
Написать программу, осуществляющую перестановку крайних цифр в целом трехзначном числе. 
Целое трёхзначное число задаётся на стандартном потоке stdin, результат перестановки выводить 
в виде трёхзначного числа с учётом ведущих нулей на стандартный поток вывода stdout. В конце ответа не должно быть переноса.
вход: 159 результат: 951
вход: 120 результат: 021
вход: -123 результат: -321
*/
