#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float delta, x1, x2;
    printf("Inserisci il valore di a: ");
    scanf("%f", &a);
    printf("Inserisci il valore di b: ");
    scanf("%f", &b);
    printf("Inserisci il valore di c: ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Impossibile calcolare le radici.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Le radici dell'equazione sono:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}