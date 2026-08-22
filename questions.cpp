/// Two sum:

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<int> m(vector<int> nums , int target ){
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i = 0 ; i<nums.size(); i++){
        int first = nums[i];
        int sec = target - first;
        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[nums[i]] = i;

    }
    return ans;
}

int main(){
    vector<int> nums = {2,11,7,4};
    int target = 9;
    m(nums , target);
}