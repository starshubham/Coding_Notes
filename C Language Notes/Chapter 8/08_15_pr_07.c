#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1; 
        ptr++;
    }
}

int main(){
    char c[] = "dpnf!up!uijt!sppn";
    decrypt(c);
    printf("Decrypted string is: %s", c);
    return 0;
}


// ***** practice *******

// #include <stdio.h>
// void incrypt(char *c){
//     char *ptr =c;
//     while(*ptr!='\0'){
//         *ptr = *ptr+1;
//         ptr++;
//     }
// }
// int main(){
//     char c[] = "come to this room";
//     incrypt(c);
//     printf("Incrypted string is: %s", c);
//     return 0;
// }