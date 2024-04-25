#include <stdio.h>

// H�m d? xu?t th? t? tang d?n c?a c�c ch? s?
void printIncreasingOrder(int num) {
    // T�ch c�c ch? s? th�nh h�ng tram, h�ng ch?c v� h�ng don v?
    int hundreds = num / 100;
    int tens = (num % 100) / 10;
    int units = num % 10;

    // S?p x?p c�c ch? s? theo th? t? tang d?n b?ng c�u l?nh if else
    int first, second, third;
    if (hundreds <= tens && hundreds <= units) {
        first = hundreds;
        if (tens <= units) {
            second = tens;
            third = units;
        } else {
            second = units;
            third = tens;
        }
    } else if (tens <= hundreds && tens <= units) {
        first = tens;
        if (hundreds <= units) {
            second = hundreds;
            third = units;
        } else {
            second = units;
            third = hundreds;
        }
    } else {
        first = units;
        if (hundreds <= tens) {
            second = hundreds;
            third = tens;
        } else {
            second = tens;
            third = hundreds;
        }
    }

    // Xu?t k?t qu?
    printf("Thu tu tang dan cua cac chu so: %d%d%d\n", first, second, third);
}

int main() {
    int n;
    printf("Nhap mot so nguyen gom ba chu so: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Vui long nhap mot so nguyen gom ba chu so.");
    } else {
        printIncreasingOrder(n);
    }

    return 0;
}

