#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* arr, char* sep){
    int arr_len = 0;
       for (int i = 0; i < arr->size; i++){
        arr_len += strlen(arr->array[i]);
    }

    int sep_len = arr->size * strlen(sep);

    char* result_array = malloc(sizeof(string_array) * (arr_len + sep_len + 1));  // this is allocating memory for result array
        for(int i = 0; i < arr->size - 1; i++){
            strcat(result_array, arr->array[i]);
            strcat(result_array, sep);
        }
    strcat(result_array, arr->array[arr->size - 1]);    
    return result_array;   //the string joined with separator
}

// int main(){
//     char arr [] = {"abc, def, ghy" && "-"};
//     return 0;
// }


// write(1,arr->array[i],strlen(arr->array[i]));
//         write(1,sep,strlen(sep));