#include <stdio.h>

int main() {
    int n;
    printf("enter the size of first array: ");
    scanf("%d" , &n);

    int arr[100];
    printf("enter %d integers\n" , n);
    for (int i=0 ; i<n ; i++) {
        scanf("%d" , &arr[i]); 
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    printf("Unique elements: ");
    int i;  
    for (i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i+1])  
            printf("%d ", arr[i]);
    }
    if (n > 0) printf("%d\n", arr[n-1]);  

    return 0;
}
