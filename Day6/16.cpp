#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;

    vector<int> freq(26, 0);

    for(char ch : s)
        freq[ch - 'a']++;

    for(char ch : t)
        freq[ch - 'a']--;

    for(int x : freq) {
        if(x != 0)
            return false;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    cout << isAnagram(s, t);

    return 0;
}