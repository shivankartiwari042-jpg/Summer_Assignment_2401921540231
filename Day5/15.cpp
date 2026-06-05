#include<iostream>
#include<vector>
#include<string>
using namespace std;

string commonPrefix(vector<string>& arr){
    string ans="";

    for(int i=0;i<arr[0].size();i++){
        char ch=arr[0][i];

        for(int j=1;j<arr.size();j++){
            if(i>=arr[j].size() || arr[j][i]!=ch){
                return ans;
            }
        }

        ans+=ch;
    }

    return ans;
}

int main(){
    vector<string> arr={"flower","flow","flight"};

    cout<<commonPrefix(arr);

    return 0;
}