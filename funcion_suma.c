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
