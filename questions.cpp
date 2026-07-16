///move zeroes:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,1,2,0,4,5};
    int size = nums.size();
        int st = 0, end = 0;
        for(int i = 0 ; i<size;i++){
            if(nums[end] != 0){
                swap(nums[st],nums[end]);
                st++;
                end++;
            }else if(nums[end] == 0){
                end++;
            }
        }
        for(int i : nums){
            cout << i;
        }
}
