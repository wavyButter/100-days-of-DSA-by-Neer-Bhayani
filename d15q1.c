#include <stdio.h>

#define MAX_SIZE 100
int main () {
    int r,c;
    int mat[MAX_SIZE][MAX_SIZE];

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j< c; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix:\n");
    for(int i = 0; i < r; i++) {
        for ( int j = 0; j < c; j++)
        {
         printf("%d", mat[i][j]);
        }
        printf("\n");
        
    }

    int sum = 0;
    for(int i = 0; i < r; i++) {
        sum += mat[i][i];
    }
    printf("%d\n", sum); 


    
        
    
return 0;
}
