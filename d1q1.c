#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int arr[100];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos, x;
    printf("Enter position (0-based): ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &x);
    
    
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    
    
    arr[pos] = x;
    
    
    printf("Updated array: ");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
