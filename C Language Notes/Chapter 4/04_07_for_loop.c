// #include<stdio.h>

// int main(){
//     for(int a=0; a<10; a++){
//         printf("The value of a is %d \n", a+1);
//     }
//     return 0;
// }

// program to print first n natural numbers.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        printf("%d\n", i+1);
    return 0;
}