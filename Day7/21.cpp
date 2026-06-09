#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> ans;

    int n = p.length();
    int m = s.length();

    if(n > m) return ans;

    vector<int> freqP(26, 0);
    vector<int> freqS(26, 0);

    for(char ch : p)
        freqP[ch - 'a']++;

    for(int i = 0; i < n; i++)
        freqS[s[i] - 'a']++;

    if(freqP == freqS)
        ans.push_back(0);

    for(int i = n; i < m; i++) {
        freqS[s[i] - 'a']++;
        freqS[s[i - n] - 'a']--;

        if(freqP == freqS)
            ans.push_back(i - n + 1);
    }

    return ans;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> ans = findAnagrams(s, p);

    for(int x : ans)
        cout << x << " ";

    return 0;
}