#include "swap.h"
#include "input.h"

void shall_sort(int* array_copy) {
    int len = *array_copy;
    int* array = array_copy + 1; 
    int step = len;
    do {
        step /= 2;
        for (int i = 0; i < step; i++) {            
            for (int j = i + step; j < len; j += step) {            
                for (int k = j; k - step >= i; k -= step) {
                    if (array[k] < array[k - step]) {
                        SWAP(array[k], array[k - step]);
                    }
                    else {
                        break;
                    }
                }
            }
        }
    } while (step > 1);
}