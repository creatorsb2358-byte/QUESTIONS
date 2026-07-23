///find the xor of numbers which appear twice:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {7,1,3,5,6,3,6};
    int size = nums.size();
    int ans = 0;
    for(int i = 0; i< size ; i++){
        for(int j = i+1; j< size ; j++){        
            if(nums[i] == nums[j]){
                ans ^= nums[i]; 
                break;
            }
        }
        
    }
    cout << ans;     
}

