#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat,int r,int c){
    int m=mat.size();
    int n=mat[0].size();
    if(m*n!=r*c){
        return mat;
    }
    vector<vector<int>> ans(r,vector<int>(c));
    int idx=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[idx/c][idx%c]=mat[i][j];
            idx++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> mat={{1,2},{3,4}};
    vector<vector<int>> ans=matrixReshape(mat,1,4);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}