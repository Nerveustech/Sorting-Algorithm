/*Created By Andrea Michael*/
/*Bubble Sort Algo*/

#ifndef BUBBLE_SORT_ALGO_H
#define BUBBLE_SORT_ALGO_H
#include <stdio.h>

#define get_array_length(array) (sizeof(array) / sizeof((array)[0]))

void bubble_sort(int iArray[], int length);
void bubble_sort_decreasing(int iArray[], int length);

#endif
