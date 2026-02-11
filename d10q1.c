#include <stdio.h>
int main () {
    char str[100], original[100];
    printf("enter ur number : ", str);
    scanf("%s", str);

    int i;
    for(i = 0; str[i] != '\0'; i++) {
        original[i] = str[i];
    }
    original[i] = '\0';

    int len =0;
    while(str[len] != '\0'){
        len++;
    }


    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;

    }

    
    if (strcmp(str, original) == 0) {
        printf("pallindrome\n");

    } else {
        printf("no");
    }
    




    return 0;
}
