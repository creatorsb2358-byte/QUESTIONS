/// combination sum:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void anss(vector<int>& candidates , int currsum , int curridx ,int target, vector<vector<int>>& ans , vector<int>& small){
    if(currsum > target) return ;
    if(currsum == target){
        ans.push_back(small);
        return ;
    }
    for(int i = curridx; i<candidates.size(); i++){
        currsum += candidates[i];
        small.push_back(candidates[i]);
        anss(candidates,currsum , i , target , ans , small);
        small.pop_back();
    }

}

vector<vector<int>> combsum(vector<int>& candidates, int target){
    int currsum = 0 , curridx  = 0 ;
    vector<int> small ;
    vector<vector<int>> ans;
    anss(candidates , currsum,curridx,target,ans, small);
    return ans;
}

int main(){
    vector<int> candidates = {2,3,5};
    int target = 8;
    combsum(candidates,target);
}