#include <iostream>
#include <string>
using namespace std;

bool repeatedSubstringPattern(string s) {
    int n = s.length();

    for(int len = 1; len <= n / 2; len++) {

        if(n % len != 0) continue;

        string part = s.substr(0, len);
        string temp = "";

        for(int i = 0; i < n / len; i++) {
            temp += part;
        }

        if(temp == s) return true;
    }

    return false;
}

int main() {
    string s = "abab";

    cout << repeatedSubstringPattern(s);
}