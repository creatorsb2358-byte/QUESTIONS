/// Missing number:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {0,3,1};
    int sum = 0 , sum1 = 0 ;
    for(int i = 0 ; i <= nums.size() ; i++){
        sum += i;
    }
    for(int i = 0 ; i< nums.size() ; i++){
        sum1 += nums[i];
    }
    int ans = sum - sum1;
    cout << ans; 
    return 0 ;
}