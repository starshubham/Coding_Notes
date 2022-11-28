#include<stdio.h>

int main(){
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers. 
    // Disclaimer: This is not the best method to solve this problem
    int n = 5, prime=1;
    for(int i=2;i<n/2;i++){
        if (n%i==0 ){
            prime = 0;
            break;
        }
    }
    if (prime==0){
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }
    return 0;
}

// #include<stdio.h>

// int main(){
    
//     int i, n = 10, prime=1;
//     i=2;
//     while(i<n/2){
//         if (n%i==0 ){
//             i++;
//             prime = 0;
//             break;
//         }
//     }
//     if (prime==0){
//         printf("This is not a prime number");
//     }
//     else{
//         printf("This is a prime number");
//     }
//     return 0;
// }