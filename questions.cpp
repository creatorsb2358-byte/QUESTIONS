///search inert position:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {-1,3,5,6,11};
    int size = nums.size();
    int target = 9;
    int st = 0 , end = size - 1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(target == nums[mid]){
            return mid;
        }
        if(target > nums[mid]){
            st = mid+1;
        }else if(target < nums[mid]){
            end = mid-1;
        }
    }
    return st;
}