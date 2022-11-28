#include <stdio.h>
void changeValue(int *i){
    *i = 10*(*i);
}


int main(){
    int i=4;
    printf("The value of variable i is %d\n", i);
    changeValue(&i);
    printf("The 10 times of variable i is %d\n", i);
    return 0;
}

// *** problem no 7 ***

// #include <stdio.h>
// void changeValue(int i){
//     i = 10*(i);
// }


// int main(){
//     int i=4;
//     printf("The value of variable i is %d\n", i);
//     changeValue(i);
//     printf("The 10 times of variable i is %d\n", i);
//     return 0;
// }