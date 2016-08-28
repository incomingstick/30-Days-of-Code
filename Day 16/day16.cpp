#include <string>
#include <iostream> 
#include <exception>

using namespace std;

int main(){
    string S;
    cin >> S;

    int I;

    try {
        I = stoi(S);
        cout << I << endl;
    } catch (...) {
        cout << "Bad String" << endl;
    }

    return 0;
}