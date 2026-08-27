/// recursive binary search:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int scan(vector<int>& nums, int target,int st, int end){
    while(st < end){
        int mid = st + (end-st)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            return scan(nums,target,st,mid-1);
        }else{
            return scan(nums,target,mid+1,end);
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,3,5,6,9,10};
    int target = 6,st = 0 , end = nums.size();
    cout << scan(nums,target,st,end);
}

