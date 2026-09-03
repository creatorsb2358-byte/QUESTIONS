/// combination sum 2:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(vector<int>& candidates, int idx , int sum ,int target ,vector<int>& small , vector<vector<int>>& ans){
    if(sum > target) return;

    if(sum == target){
        ans.push_back(small);
        return;
    }

    for(int i = idx ; i<candidates.size(); i++){
        small.push_back(candidates[i]);
        sum += candidates[i];
        solve(candidates,i+1,sum, target,small,ans);
        small.pop_back();
        sum-= candidates[i];
        int idx = i+1;
        while(idx < candidates.size() && candidates[idx] == candidates[idx-1]){
            i++,idx++;
        }
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<int>small ;
    vector<vector<int>> ans;
    int sum = 0;
    int idx = 0;
    solve(candidates,idx,sum , target , small , ans);
    return ans;
}

int main(){
    vector<int> candidates={2,1,2,5,2};
    int target = 5;
    combinationSum2(candidates,target);
}