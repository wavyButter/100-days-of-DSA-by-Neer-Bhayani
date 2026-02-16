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

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == j && mat[i][j] !=0){
                printf("no");
            }
            else if(i != j && mat[i][j] != 0) {
                printf("identity");
            }
        }
    }
return 0;
}
