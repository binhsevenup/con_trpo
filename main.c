#include <stdio.h>
#include <stdlib.h>

int Tong(int a, int b) {
    return a + b;
}

int Hieu(int a, int b) {
    return a - b;
}

int Tich(int a, int b) {
    return a * b;
}

float Thuong(int a, int b) {
    if (b == 0) {
        printf("Syntax ERROR! You can not use '0' as the Divisor number, please try again. \n");
        exit(-1);
    } else return (float) a / b;
}

int main() {
    int so1, so2, choice, i;

    printf("--- Caculator ---\n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("----------------- \n");
    printf("Choose your caculation (1-4): ");
    scanf("%d", &choice);
    printf("Fill the first number:");
    scanf("%d", &so1);
    printf("Fill the second number:");
    scanf("%d", &so2);

    switch (choice) {

        case 1: {
            int result = Tong(so1, so2);
            printf("The result is %d", result);
        }
            break;
        case 2: {
            int result = Hieu(so1, so2);
            printf("The result is %d", result);
        }
            break;
        case 3: {
            int result = Tich(so1, so2);
            printf("The result is %d", result);
        }
            break;
        case 4: {
            float result = Thuong(so1, so2);
            printf("The result is %f", result);
            break;
        }
    }
    return 0;
}