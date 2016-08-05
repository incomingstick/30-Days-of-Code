#include <cstdio>
#include <vector>
#include <iostream>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;

    map<string, int> phone_book;

    for (size_t i = 0; i < N; i++) {
        string temp_str;
        cin >> temp_str;
        int temp_int;
        cin >> temp_int;

        phone_book[temp_str] = temp_int;
    }

    string temp_str;
    while(cin >> temp_str) {
        if(phone_book.find(temp_str) == phone_book.end()) {
            cout << "Not found" << endl;
        } else {
            cout << temp_str << "=" << phone_book[temp_str] << endl;
        }
    }

    return 0;
}
