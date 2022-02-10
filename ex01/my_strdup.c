#include <stdlib.h>
#include <stdio.h>

char* my_strdup(char* sc){
char *str;   char *p;   int len =0;
while (sc[len])
 len++;
str=malloc(len+1);
p = str;
while (*sc)
  *p++ = *sc++;
  *p = '\0';
  return str;
}

// int main(){
//     my_strdup("abc");
//     return 0;
// }