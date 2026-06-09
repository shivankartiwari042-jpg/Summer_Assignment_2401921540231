#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;

    for(string str : strs) {
        string temp = str;
        sort(temp.begin(), temp.end());

        mp[temp].push_back(str);
    }

    vector<vector<string>> ans;

    for(auto it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    for(auto group : ans) {
        for(string s : group) {
            cout << s << " ";
        }
        cout << endl;
    }
}