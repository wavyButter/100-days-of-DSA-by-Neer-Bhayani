#include <stdio.h>
int main () {
    int n,arr[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
int freq[100] = {0};
    for(int i = 0; i < n; i++) freq[arr[i]]++;{
        for(int i = 1; i<= n; i++){
            if(freq[i] > 0) 
            printf("%d:%d\n",i, freq[i]);
        }
        
    }






    return  0;
}
