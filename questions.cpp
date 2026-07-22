///contains duplicate:

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,2,3,5};
    int size = nums.size();
    sort(nums.begin(), nums.end());
    for(int i = 0 ;i< size-1; i++){
        if(nums[i] == nums[i+1]){
            return true ;
        }
    }
    return false ;
}

