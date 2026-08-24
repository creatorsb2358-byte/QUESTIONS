/// 3Sum:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    for(int i = 0 ; i<nums.size(); i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        int st = i+1 , end =nums.size()-1;
        while(st < end){
            int sum = nums[i] + nums[st] + nums[end];
            if(sum > 0){
                end--;
            }else if(sum <0){
                st++;
            }else{
                ans.push_back({nums[i],nums[st],nums[end]});
                st++,end--;
            }
            while(st > 0 && nums[st] == nums[st-1]){
                st++;
            }
        }
        return ans;
    }

}