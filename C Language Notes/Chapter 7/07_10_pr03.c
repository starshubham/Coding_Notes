// #include<stdio.h>

// int main(){
//     int mul[10];
//     for(int i=0; i<10; i++){
//         mul[i] = 5*(i+1);
//     }

//     for(int i=0; i<10; i++){
//         printf("5X%d = %d\n", i+1, mul[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int mul[10];
    int n;

    printf("Enter the number you want for mul table\n");
    scanf("%d", &n);
    {
        for (int i = 0; i < 10; i++)
        {
            mul[i] = n * (i + 1);
        }

        for (int i = 0; i < 10; i++)
        {
            printf("nX%d = %d\n", i + 1, mul[i]);
        }
    }
    return 0;
}