#include<iostream>
#include<vector>
using namespace std;

void reverseStr(vector<char>& arr){
    int i=0;
    int j=arr.size()-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    vector<char> arr={'h','e','l','l','o'};

    reverseStr(arr);

    for(char ch:arr){
        cout<<ch<<" ";
    }

    return 0;
}