#include<stdio.h>

int main(){
    int a;
    printf("Enter an input: ");
    scanf("%d", &a);
    
    int s, i, j;
    for(i = 1; i <= a; i++){
        for(s = i; s < a; s++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    } 
    return 0;
}