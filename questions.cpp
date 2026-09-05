/// permutations 2:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void solve(vector<int>& nums, int start, vector<vector<int>>& ans) {

    if(start == nums.size()) {
        ans.push_back(nums);
        return;
    }

    set<int> used;

    for(int i = start; i < nums.size(); i++) {

        if(used.count(nums[i])) {
            continue;
        }

        used.insert(nums[i]);

        swap(nums[i], nums[start]);

        solve(nums, start + 1, ans);

        swap(nums[i], nums[start]);
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;

    solve(nums, 0, ans);

    return ans;
}