///pairsum:

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int>& nums, int target){
    int i = 0 , j = 3;
    while(i <  j ){
        int pairsum = nums[i] + nums[j];
        if(pairsum > target){
            j--;
        }else if (pairsum < target){
            i++;
        }else {
            nums.push_back(i);
            nums.push_back(j);
            return nums;
        }
    }
}

int main(){
    vector<int> nums  = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairsum(nums , target );
    cout << ans[0] << " " << ans[1] ;
}

