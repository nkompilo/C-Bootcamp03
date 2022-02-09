#include <stdlib.h>
#include <stdio.h>
int* my_range(int n1, int n2){
int j=n1;
int *p;
p = (int *)malloc(sizeof(int) * n2);
for (int i = 0; i < n2; i++){
    p[i]=j;
    j++;
    }
return p;}

// int main(){
//      my_range(1 , 8);
//     return 0;
// }