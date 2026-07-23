/// Best time to buy and sell stock:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {7,1,3,5,6,2};
    int size = nums.size();
    int bb = nums[0];
        int sp = 0;
    for(int i = 1 ; i< size ; i++){
        if(nums[i] > bb){
            sp = max(sp , nums[i] - bb);
        }
        bb = min(nums[i],bb);
    }
    cout << "the maximum profit is -" << sp;
}

