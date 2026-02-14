#include <stdio.h>
int main () {
    int mat[20][20],i,j,size;

    printf("enter size of matrices : ");
    scanf("%d", &size);



    printf("enter elements of first matrix :");
    for(i = 0; i < size; i++) {
        for(j = 0; j <size; j++) {
    scanf("%d", &mat[i][j] );
    }
}

    

    int sym = 1;
    for(i = 0; i < size && sym; i++) {
        for(j = 0; j < size; j++) {
            if(mat[i][j] != mat[j][i]) {
                sym = 0;
                break;
            }
        }
    }    
    return 0;
}
