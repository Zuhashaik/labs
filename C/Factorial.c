#include<stdio.h>
long int multiplyNumbers(int n);
    int n;
int main() {
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
        printf("hi %d ",n);


    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1){
    printf("hi %d ",n);
        return n*multiplyNumbers(n-1);

        }
    else
        return 1;
}