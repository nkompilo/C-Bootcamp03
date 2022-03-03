#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY

typedef struct s_string_array{
    int index;
    int size;
    char** array;
} string_array;
#endif

char my_print_words_array(string_array* arr){
for (int i = 0; i < arr->size ; i++){
   write(1,arr->array[i],strlen(arr->array[i]));
    write(1,"\n",strlen("\n"));
    }
return 0;
 }
// int main(){
//     char arr [] = {"abc, def, ghy"};
//     return 0;
// }

