#include<stdio.h>
long int multiplyNumbers(int num);
int main() {
    int num;
    printf("Enter the number here to find the factorial : ");
    scanf("%d",&num);
    printf("Factorial of %d = %ld", num, multiplyNumbers(num));
    return 0;
}

long int multiplyNumbers(int num) {
    if (num>=1)
        return num*multiplyNumbers(num-1);
    else
        return 1;
}
