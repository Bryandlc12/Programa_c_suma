#include <stdio.h>

struct valores {
    int a;
    int b;
};
int main (void) {
    struct valores val1;
    struct valores val2;
    val1.a = 3;
    val1.b = 4;
    val2.a = 6;
    val2.b = 8;

    suma (val1, val2);
    resta (val1, val2);
    divicion(val1, val2);
}
int suma (struct valores sum1, struct valores sum2){
    int suma1 = (sum1.a * sum2.b) + (sum2.a * sum1.b);
    int suma2 = sum1.b * sum2.b;
    
    printf("La suma de la suma de fracciones las%d/%d + %d/%d es %d/%d\n", sum1.a, sum1.b, sum2.a, sum2.b, suma1, suma2);
 return 0;
}

int resta (struct valores sum1, struct valores sum2){
    int resta1 = sum1.a * sum2.b - sum2.a * sum1.b;
    int resta2 = sum1.b * sum2.b;

    printf("La resta de la resta de las fracciones %d/%d y %d/%d es %d/%d\n", sum1.a, sum1.b, sum2.a, sum2.b, resta1, resta2);
}

int divicion (struct valores sum1, struct valores sum2){
    int divicion1 = sum1.a * sum2.b;
    int divicion2 = sum2.a * sum1.b;

    printf("El resultado de la división de las fracciones %d/%d y %d/%d es: %d/%d\n", sum1.a, sum1.b, sum2.a, sum2.b, divicion1, divicion2);
}
