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

    printf("boundary to center walk :");
    

for(int j = 0; j < c; j++) {
    printf("%d ", mat[0][j]);
}


for(int i = 1; i < r; i++) {
    printf("%d ", mat[i][c-1]);
}


for(int j = c-2; j >= 0; j--) {
    printf("%d ", mat[r-1][j]);
}


for(int i = r-2; i > 0; i--) {
    printf("%d ", mat[i][0]);
}


if(r % 2 == 1 && c % 2 == 1) {
    printf("%d", mat[r/2][c/2]);
}

printf("\n");

return 0;
}
