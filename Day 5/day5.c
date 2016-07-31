#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int N; 
    scanf("%d", &N);
    
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, (N * i));
    }

    return 0;
}