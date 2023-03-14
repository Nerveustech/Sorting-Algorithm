/*Created By Andrea Michael*/
#include "bubble_sort.h"

void swap(int* iArrayA, int* iArrayB){
    int temp = *iArrayA;
    *iArrayA = *iArrayB;
    *iArrayB = temp;
}

int is_sorted(int iArray[], int length){
    
    for(int i = 0; i < length - 1; i++){
        if(iArray[i] > iArray[i + 1])
            return 1;
    }
    
    return 0;
}

int is_sorted_decreasing(int iArray[], int length){

    for(int i = 0; i < length - 1; i++){
        if(iArray[i] < iArray[i + 1])
            return 1;
    }

    return 0;
}

#ifndef NOT_OPTIMIZED
void bubble_sort(int iArray[], int length){
    
    if(!length > 1){
        fprintf(stderr, "[WARNING!] bubble_sort(int, int lenght): lenght need to be > 1\n");
        return;
    }

    int i,j;
    for(i = 0; i < length - 1; i++){
        for(j = 0; j < length - i - 1; j++){
            if(iArray[j] > iArray[j+1])
                swap(&iArray[j], &iArray[j + 1]);
        }
    }
}

void bubble_sort_decreasing(int iArray[], int length){
    
    if(!length > 1){
        fprintf(stderr, "[WARNING!] bubble_sort(int, int lenght): lenght need to be > 1\n");
        return;
    }

    int i,j;
    for(i = 0; i < length - 1; i++){
        for(j = 0; j < length - i - 1; j++){
            if(iArray[j] < iArray[j+1])
                swap(&iArray[j], &iArray[j + 1]);
        }
    }

}
#else

void bubble_sort(int iArray[], int isize){
    return;
}

#endif
