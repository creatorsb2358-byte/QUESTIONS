///search in a rotated sorted array;

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {5,6,7,8,0,1,2,3,4};
    int target = 7;
    int size = nums.size();
    int st = 0 , end = size -1 ;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(nums[mid] == target){
            cout << mid;
        }
        if(nums[st] <= nums[mid]){
            if(nums[st] <= target  && target <= nums[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        if(nums[mid] < nums[end]){
            if(nums[mid] <= target  && target <= nums[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}