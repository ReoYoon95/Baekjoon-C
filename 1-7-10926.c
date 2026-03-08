#include<stdio.h>

int main(void) {
    
    char ID[50];
    scanf("%s", ID);

    if (strcmp("joonas", ID) == 0) {
        printf("%s??!\n", ID);
    }
    return 0;
}