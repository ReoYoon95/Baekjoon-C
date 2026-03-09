#include<stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);
    if(B == 0)  {
        printf("Division by zero is not allowed.\n");  
    }
    else {
        printf("%0.12lf\n", (double)A / B);
    }
    
    return 0;
}