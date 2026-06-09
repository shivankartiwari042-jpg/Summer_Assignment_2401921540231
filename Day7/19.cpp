#include <iostream>
#include <vector>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(256, -1);

    int left = 0;
    int ans = 0;

    for(int right = 0; right < s.length(); right++) {
        if(lastIndex[s[right]] >= left) {
            left = lastIndex[s[right]] + 1;
        }

        lastIndex[s[right]] = right;
        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}