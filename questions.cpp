/// 3Sum:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0 ; i<nums.size(); i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        for(int j = 0; j<nums.size(); ){
            int st = j+1 , end =nums.size()-1;
            while(st < end){
                int sum = nums[i] + nums[j] + nums[st] + nums[end];
                if(sum > target){
                    end--;
                }else if(sum <target){
                    st++;
                }else{
                    ans.push_back({nums[i],nums[j],nums[st],nums[end]});
                    st++,end--;

                    while(st > 0 && nums[st] == nums[st-1]){
                        st++;
                    }
                }
                    
            }
            j++;
            while(j < nums.size() && nums[j] == nums[j-1]){
                j++;
            }
        }
        return ans;
    }

}