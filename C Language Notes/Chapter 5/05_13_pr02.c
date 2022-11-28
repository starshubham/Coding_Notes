#include <stdio.h>

float celsiustoFahrenheit(float c);

int main(){
    float celsius, f;
    printf("Enter temperature in celsius\n");
    scanf("%f", &celsius);
    f = celsiustoFahrenheit(celsius);
    printf("%f celsius = %f fahrenheit", celsius, f);
    return 0;
}

float celsiustoFahrenheit(float c){
    float f;
    f = (c*9/5) +32;
    return f;
}
