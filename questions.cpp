///leetcode 136 - single number:

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int val : nums){
        ans ^= val;
    }
    cout << ans;
}

int main(){
    vector<int> numm = {1,2,3,1,2,3,4};
    singleNumber(numm);
}