/// combinations 3 :

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void solve(int k , int n , int sum , vector<int>& curr , vector<vector<int>>& ans,int i ){
    if(curr.size() == k && sum == n){
        ans.push_back(curr);
        return;
    }
    if(curr.size() == k && sum != n){
        return;
    }
    for(int j = i ; j < 10; j++){
        curr.push_back(j);
        sum+=j;
        solve(k,n,sum,curr,ans,j+1);
        curr.pop_back();
        sum -= j;
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> curr;
    vector<vector<int>> ans;
    int sum = 0 , i=1;
    solve(k,n,sum,curr,ans,i); 
    return ans;
}