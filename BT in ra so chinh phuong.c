#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// H�m ki?m tra s? ch�nh ph��ng
bool isPerfectSquare(int num) {
    int sqrtNum = (int)sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main() {
    int start, end;

    // Nh?p kho?ng s? t? ng�?i d�ng
    printf("Nhap khoang bat dau: ");
    scanf("%d", &start);
    printf("Nhap khoang ket thuc: ");
    scanf("%d", &end);

    printf("Cac so chinh phuong trong khoang tu %d den %d la:\n", start, end);
int i; 
    // L?p qua c�c s? trong kho?ng v� ki?m tra s? ch�nh ph��ng
    for ( i = start; i <= end; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

