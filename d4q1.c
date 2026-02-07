#include <stdio.h>
int main () {
int n;
    int e;
    int i;
    int r;
    printf("enter size of the array : ");
    scanf("%d", &n);

    int arr[n];
    
    printf("enter %d elements : ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("array : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    for(i = 0; i < n/2; i++ )
    {  r = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = r;
        
    }
     
    printf("reversed array : ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

return 0;
}
