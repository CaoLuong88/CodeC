#include <stdio.h>

// Hàm d? s?p x?p các ch? s? tang d?n
void sortDigitsAscending(int num) {
    // Tách các ch? s?
    int digit1 = num / 100; // Ch? s? hàng tram
    int digit2 = (num / 10) % 10; // Ch? s? hàng ch?c
    int digit3 = num % 10; // Ch? s? hàng don v?

    // S?p x?p các ch? s? tang d?n b?ng thu?t toán Bubble Sort
    int temp;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (digit1 > digit2) {
                temp = digit1;
                digit1 = digit2;
                digit2 = temp;
            }
            if (digit2 > digit3) {
                temp = digit2;
                digit2 = digit3;
                digit3 = temp;
            }
        }
    }

    // Xu?t k?t qu?
    printf("Thu tu tang dan cua cac chu so la: %d%d%d", digit1, digit2, digit3);
}

int main() {
    int n;
    printf("Nhap mot so nguyen gom ba chu so: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Vui long nhap mot so nguyen gom ba chu so.");
    } else {
        sortDigitsAscending(n);
    }

    return 0;
}

