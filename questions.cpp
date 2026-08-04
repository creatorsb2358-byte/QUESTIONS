///find the first and last occurence:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    int size = nums.size();
    vector<int> arr;
    int st = 0 , end = size -1, ans = -1;
    while(st <= end){
        int first = st + (end-st)/2;
        if(nums[first] == target){
            ans = first;
            end = first -1;
        }else if(nums[first] > target){
            end = first -1;
        }else if(nums[first]< target){
            st = first +1;
        }
    }
    arr.push_back(ans);
    int st1 = 0, end1 = size -1 , ans1 =-1;
    while(st1 <= end1){
        int last = st1 + (end1-st1)/2;
        if(nums[last] == target){
            ans1 = last;
            st = last +1;
        }else if(nums[last] > target){
            end = last -1;
        }else if(nums[last] < target){
            st = last +1;
        }
    }
    arr.push_back(ans1);
    return arr;
}