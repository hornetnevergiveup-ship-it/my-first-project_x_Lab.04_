#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>

float x;
float y;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    printf("\nВведіть значення абсциси та ординати: ");
    scanf("%f%f", &x, &y);

    // Визначення чи належить точка M(x,y) заштрихованій на малюнку області
    if ((x * x + y * y <= 1) && ((x <= 0 && y >= 0) || (x >= 0 && y <= 0)))
        printf("\nx=%f y=%f Точка M(x,y) належить заштрихованій області.\n", x, y);
    else
        printf("\nx=%f y=%f Точка M(x,y) не належить заштрихованій області.\n", x, y);

    return 0;
}