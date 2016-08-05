#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n) {
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);

    if(n < 2 || n > 12)
        return 1;

    printf("%d\n", factorial(n));

    return 0;
}
