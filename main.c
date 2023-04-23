#include "input.h"
#include "shall.h"

int main() {
    puts("input array: ");
    int* a = get_array();
    shall_sort(a);
    puts("result of shall sort 1st set");
    print(a);
    free(a);
    puts("input string: ");
    char* string = get_str();
    printf ("ur string: %s", string);
    free(string);
    return 0;
}