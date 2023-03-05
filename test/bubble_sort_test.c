/*Created By Andrea Michael*/
#include <stdio.h>
#include "../src/Bubble_Sort/bubble_sort.h"
#include <assert.h>

void test_array_size(void){
    
    int iarray_size_test[] = {37,40,3,52,4,34,7,10};

    int iarray_size = get_array_length(iarray_size_test);
    
    assert(iarray_size == 8);
    
    return;
}

void test_bubble_sort(void){
    
    int iarray_test[] = {37,40,3,52,4,34,7,10};

    bubble_sort(iarray_test, get_array_length(iarray_test));

    assert(iarray_test[0] == 3);
    assert(iarray_test[1] == 4);
    assert(iarray_test[2] == 7);
    assert(iarray_test[3] == 10);
    assert(iarray_test[4] == 34);
    assert(iarray_test[5] == 37);
    assert(iarray_test[6] == 40);
    assert(iarray_test[7] == 52);

    return;
}

void test_bubble_sort_decreasing(void){
    
    int iarray_test[] = {37,40,3,52,4,34,7,10};

    bubble_sort_decreasing(iarray_test, get_array_length(iarray_test));

    assert(iarray_test[0] == 52);
    assert(iarray_test[1] == 40);
    assert(iarray_test[2] == 37);
    assert(iarray_test[3] == 34);
    assert(iarray_test[4] == 10);
    assert(iarray_test[5] == 7);
    assert(iarray_test[6] == 4);
    assert(iarray_test[7] == 3);

    return;
}

int main(void){
    
    printf("Testing Bubble Sort Algo\n\n");
    
    printf("Testing get_array_size:");
    test_array_size();
    printf(" \033[32mSuccess\033[0m\n");
    
    printf("Testing bubble_sort:");
    test_bubble_sort();
    printf(" \033[32mSuccess\033[0m\n");
    
    printf("Testing bubble_sort_decreasing:");
    test_bubble_sort_decreasing();
    printf(" \033[32mSuccess\033[0m\n");

    return 0;
}