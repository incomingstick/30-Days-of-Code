#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    
    cin >> T;

    if(T < 1 || T > 10) {
        cout << "T " << T << " too big try again." << endl;

        return main();
    }

    string a[T];

    for(int i = 0; i < T; i++) {
        string S;
        cin >> S;
        a[i] = S;
    }

    for(int i = 0; i < T; i++) {
        string even = "";
        string odd = "";

        for (int j = 0; j < a[i].size(); j++) {
            char c = a[i][j];

            if(j % 2 == 0) {
                even += c;
            } else {
                odd += c;
            }
        }

        cout << even << " " << odd << endl;
    }

    return 0;
}
