#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    int num = 0;
    printf("Nhap vao mot so co trong mang: ");
    scanf("%d", &num);
    
    int minus = 0; 
    int i, j; 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (num == arr[i][j]) {
                printf("Co trong mang\n");
                minus = 1; 
                break; 
            }
        }
        if (minus) { 
            break; 
        }
    }
    if (!minus) {
        printf("Khong co\n");  
    }
    
    
    return 0;
}

