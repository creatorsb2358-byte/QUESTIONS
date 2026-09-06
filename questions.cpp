/// 3Sum closet:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int closet = INT32_MAX;
    int ans = 0;
    for(int i = 0 ; i<nums.size(); i++){
        if(i >0 && nums[i] == nums[i-1]){
            continue;
        }
        int st = i+1;
        int end = nums.size()-1;
        while(st<end){
            int sum = nums[i] + nums[st] + nums[end];
            int diff = abs(sum - target);
            if(diff < closet){
                closet = diff;
                ans = sum;
            }
            if(sum == target){
                return sum;
            }else if(sum > target){
                end--;
            }else{
                st++;
                while(st < end && nums[st] == nums[st-1]){
                    st++;
                }
            }

        }
    }
    return ans;
}