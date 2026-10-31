#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> // Бібліотека для стабілізації виведення тексту

float x;
float y;

int main() {
    // Налаштування кодування UTF-8 для відображення української мови
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Введення значень абсциси та ординати точки:
    printf("\nВведіть значення абсциси та ординати: ");
    scanf("%f%f", &x, &y);

    return 0;
}