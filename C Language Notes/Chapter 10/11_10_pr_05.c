//  **** Welldone Shubham you did it. ****

#include <stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    int num;
    ptr = fopen("prev_file.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    printf("The value of num is %d\n", num);

    int num1;
    num1 = num*2;
    ptr1 = fopen("new_file.txt", "w");
    fprintf(ptr1, "%d", num1);
    printf("The new value of num is %d", num1);
    return 0;
}