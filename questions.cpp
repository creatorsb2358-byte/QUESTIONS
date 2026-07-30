///Book allocation problem;

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

    bool canSplit(vector<int>&nums, int limitSum, int k){

        int n = nums.size();
        int currSum = 0, splitCnt = 1;
        for(int i = 0 ; i < n ; i++){

            if(currSum + nums[i] <= limitSum){
                currSum += nums[i];
            }

            else{
                currSum = nums[i];
                splitCnt++;
            }
        }
        return splitCnt <= k;
    }
    int splitArray(vector<int>& nums, int k) {

        if(k > nums.size()) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low < high){
         
            int mid = low + (high - low) / 2;
           
            if(canSplit(nums, mid, k)){
               high = mid;
            }

            else{
                low = mid + 1;
            }
        }
        return low;
    }

int main(){
    vector<int> nums = {2,1,3,4};
    int k = 2;
    int result = splitArray(nums,k);
    cout << result ;
}