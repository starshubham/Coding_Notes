#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    // c = fgetc(ptr);
    while(c!=EOF){
        c = fgetc(ptr);
        printf("%c", c);
    }
    return 0;
}