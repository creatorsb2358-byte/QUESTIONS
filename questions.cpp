///sort colours:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,0,2,1,1,2,0,0};
    int size = nums.size();
    int low = 0 , mid = 0 , end = size - 1;
    while(mid <= end){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++ , mid++;
        }else if(nums[mid] == 2){
            swap(nums[mid],nums[end]);
            end--;
        }else{
            mid++;
        }
    }
    for(int i : nums){
        cout << i << " " ;
    }
}