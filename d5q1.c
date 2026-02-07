#include <stdio.h>

int main() {

int n1;
int n2;
int n3;
printf("enter the size of first array: ");
scanf("%d" , &n1);

int arr[100];
printf("enter %d integers\n" , n1);
for (int i=0 ; i<n1 ; i++) {
scanf("%d" , &arr[i]); 
};

printf("enter the size second of array: ");
scanf("%d" , &n2);

int arr2[100];
printf("enter %d integers for second array\n" ,n2);
for (int i=0 ; i<n2 ; i++) {
scanf("%d" , &arr2[i]); 
}; 

n3 = n1 + n2;
    int arr3[200];  

    
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr[i];
    }
      
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

for (int i = 0; i < n3 - 1; i++) {
    for (int j = 0; j < n3 - i - 1; j++) {
        if (arr3[j] > arr3[j + 1]) { 
            int temp = arr3[j];
            arr3[j] = arr3[j + 1];
            arr3[j + 1] = temp;
        }
    }
}
   
for (int i=0 ; i<n3 ; i++){
printf("%d " , arr3[i]);
}

return 0;
}
