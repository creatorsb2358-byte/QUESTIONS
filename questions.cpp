///sort array by parity II :

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {7,1,3,5,6,2};
    int size = nums.size();
    int i = 0 , j = 1;
    while (j < size && i < size){
        if(nums[i] % 2 == 0){
            i = i + 2;
        }else if(nums[j] % 2 != 0){
            j = j+2;
        }else if(nums[i] % 2 != 0 && nums[j] % 2 == 0){
            swap(nums[i],nums[j]);
            i = i+2;
            j = j+2;
        }
    }
    for(int i: nums){
        cout << i;
    }
}

