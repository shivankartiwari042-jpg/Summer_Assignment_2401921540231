#include <iostream>
#include <stack>
#include <string>
using namespace std;

string decodeString(string s) {
    stack<int> counts;
    stack<string> strings;

    string curr = "";
    int num = 0;

    for(char ch : s) {

        if(isdigit(ch)) {
            num = num * 10 + (ch - '0');
        }

        else if(ch == '[') {
            counts.push(num);
            strings.push(curr);

            num = 0;
            curr = "";
        }

        else if(ch == ']') {

            string temp = curr;
            curr = strings.top();
            strings.pop();

            int repeat = counts.top();
            counts.pop();

            while(repeat--) {
                curr += temp;
            }
        }

        else {
            curr += ch;
        }
    }

    return curr;
}

int main() {
    string s = "3[a2[c]]";

    cout << decodeString(s);
}