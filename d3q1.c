#include <stdio.h>
int main () {
    int n;
    int e;
    int i;
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
     
printf("enter element to search : ");
scanf("%d", &e);
        i = 0;
     while (i < n) {
       if (arr[i] == e ) {
            printf("%d\n", e);
            printf("found at %d ", i);
            printf("comparison count = %d", i);

     }
        i++;
    }
    



    return 0;
}
