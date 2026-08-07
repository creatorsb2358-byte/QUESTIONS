///next permutation:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,5,4,3};
    int size = nums.size();
    int pi = -1;
    for(int i = size-2; i >= 0 ; i--){
        if(nums[i] < nums[i+1]){
            pi = i;
            break;
        }
    }
    if(pi == -1){
        reverse(nums.begin(), nums.end());
        return ;
    }
    for(int i = size -1 ; i> pi ; i--){
        if(nums[i] > nums[pi]){
            swap(nums[i], nums[pi]);
            break;
        }
    }
    int i = pi+1 , j = size-1;
    while(i <= j){
        swap(nums[i],nums[j]);
        i++,j--;
    }
}