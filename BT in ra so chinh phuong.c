#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Hàm ki?m tra s? chính phýõng
bool isPerfectSquare(int num) {
    int sqrtNum = (int)sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main() {
    int start, end;

    // Nh?p kho?ng s? t? ngý?i dùng
    printf("Nhap khoang bat dau: ");
    scanf("%d", &start);
    printf("Nhap khoang ket thuc: ");
    scanf("%d", &end);

    printf("Cac so chinh phuong trong khoang tu %d den %d la:\n", start, end);
int i; 
    // L?p qua các s? trong kho?ng và ki?m tra s? chính phýõng
    for ( i = start; i <= end; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

