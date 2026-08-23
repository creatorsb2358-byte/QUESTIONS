/// Running sum in 1d array:

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,5};
    vector<int> ans;
    int sum = 0;
    for(int i = 0 ; i<nums.size(); i++){
        sum += nums[i];
        nums[i]= sum;
        ans.push_back(nums[i]);
        
    }
    for(int i : ans){
        cout << i;
    }

}