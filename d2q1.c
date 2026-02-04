#include <stdio.h>

int main() {
    int n;
    printf("enter :");
    scanf("%d", &n);

    int arr[100];
    printf("enter %d integers : ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    printf("enter pos to delete : ");
    scanf("%d", &pos);

    
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];  
    }

    
    printf("updated array : ");
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");

    return 0;
}
