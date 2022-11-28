// #include<stdio.h>
// int factorial(int x);

// int main(){
//     int a = 5;
//     printf("The value of factorial %d is %d", a, factorial(a));
//     return 0;
// }

// int factorial(int x){
//     printf("Calling factorial(%d)\n", x);
//     if (x==1 || x==0){
//         return 1;
//     }
//     else{
//         return x * factorial(x-1);
//     }
// }

#include <stdio.h>

int factorial(int n)
    {
        if (n == 1 || n == 0)
        {
            return 1;
        }
        else
        {
            return factorial(n - 1) * n;
        }
    }

int main()
{
    int n;
    printf("Enter the number\n", n);
    scanf("%d", &n);

    printf("The factorial of %d is %d", n, factorial (n));
    return 0;
}