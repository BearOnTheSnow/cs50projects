#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n; int i; int j = 0; int k;//declaring variables
    do {n = get_int("Enter height: ");} while(n<1 || n>8); //getting input
    for (i = 0; i <= n; i++){
    for (k = n-1; k>j; k--) {
            printf(" ");
            }
        for (j = 0; j < i; j++){
            printf("#");
            }
        printf("\n");
    }
}
