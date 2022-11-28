#include<stdio.h>

int main(){
    int sum=0;
    printf("****Sum of Multiplication table of 8****\n\n");
    for(int i=1;i<=8;i++){
        sum+= 8*i;
        printf("Sum of multiplication table of 8  is %d\n", sum);
    }
    return 0;
}