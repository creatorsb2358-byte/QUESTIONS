/// combinations:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(int start, int n , int k , vector<int>& path, vector<vector<int>>& ans){
    if(path.size() == k){
        ans.push_back(path);
        return;
    }
    for(int i = start ; i<=n ; i++){
        path.push_back(i);
        solve(i+1,n,k,path,ans);
        path.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<int> path;
    vector<vector<int>> ans;
    int start = 1;
    solve(start, n,k,path,ans);
    return ans;
}

int main(){
    int n= 4;
    int k = 2;
    combine(n,k);
}