///linear search in vector:

#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int>& nums, int target){
    for(int i : nums){
        if(target == nums[i]){
            cout << i;
        }
    }
}

int main(){
    vector<int> numm = {1,2,3,4,5};
    int target = 4;
    linear_search(numm , target);
}