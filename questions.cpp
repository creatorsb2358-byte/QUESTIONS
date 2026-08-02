///find minimum in rotated sorted array:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {3,4,5,6,1,2};
    int size = nums.size();
    int st = 0 , end = size -1 ;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(nums[mid] > nums[end]){
            st = mid+1;
        }else if(nums[mid] < nums[end]){
            end = mid;
        }else if(st == end){
            return nums[mid];
        }
    }
}