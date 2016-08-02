#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    
    scanf("%d", &T);

    if(T < 1 || T > 10) {
        printf("T (%d) too big try again.", T);

        return main();
    }

    char a[T][10000];

    for(int i = 0; i < T; i++) {
        char S[10000];
        scanf("%10000s", S);
        strcpy(a[i], S);
    }

    for(int i = 0; i < T; i++) {
        char even[10000] = "";
        char odd[10000] = "";

        for (int j = 0; j < strlen(a[i]); j++) {
            char c = a[i][j];

            if(j % 2 == 0) {
                even[strlen(even)] = c;
            } else {
                odd[strlen(odd)] = c;
            }
        }

        printf("%s %s\n", even, odd);
    }

    return 0;
}
