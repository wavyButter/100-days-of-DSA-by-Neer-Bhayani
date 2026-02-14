#include <stdio.h>
int main () {
    int m[20],n[20],i,size;

    printf("enter size of matrices : ");
    scanf("%d", &size);



    printf("enter elements of first matrix :");
    for(i = 0; i < size; i++){
    scanf("%d", &m[i] );
    }


    printf("enter elements of second matrix :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &n[i] );
    }
    
    
    printf("addition pf 2 matrices : ");
    for (i = 0; i < size; i++)
    { int sum = m[i] + n[i];
        printf("%d + %d = %d\n", m[i], n[i], sum);
    }




    return 0;
}
