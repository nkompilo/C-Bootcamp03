#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array {
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array {
    int size;
    int* array;
} integer_array;
#endif

integer_array* my_count_on_it(string_array* arr){
    integer_array* total;

    for (int i = 0; i < arr->size; i++){
        total->array[i] = strlen(arr->array[i]);
    }
    return total;
}

// int main (){
//     char arr [] = {"This, "is", "the", "way"};
//  return 0;
// }