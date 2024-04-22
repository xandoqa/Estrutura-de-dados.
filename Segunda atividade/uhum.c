#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float X;
    float Y;
} Ponto;

float AreaTriangulo(Ponto A, Ponto B, Ponto C) {
    return abs((A.X*(B.Y-C.Y) + B.X*(C.Y-A.Y) + C.X*(A.Y-B.Y))/2.0);
}

int main() {

    Ponto A = {1, 2};
    Ponto B = {3, 8};
    Ponto C = {5, 1};

    printf("A área do triângulo é %.2f\n", AreaTriangulo(A, B, C));

    return 0;
}
