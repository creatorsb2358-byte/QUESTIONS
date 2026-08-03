

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isvalid(vector<int>& arr, int days , int limit){
    int weight = arr[0];
    int size = arr.size();
    int day = 1;
    
    for(int i = 1 ; i< size ; i++){
        if(arr[i] > limit){
            return false;
        }
        if(weight + arr[i] <= limit){
            weight += arr[i];
        }else{
            day++;
            weight = arr[i];
        }
    }
    if(day <= days){
        return true;
    }else{
        return false;
    }
}

int working(vector<int>& nums , int days){
    int size = nums.size();
    int sum = 0;
    for(int i = 0 ; i< size ; i++){
        sum+= nums[i];
    }
    int st = *max_element(nums.begin(), nums.end()) , end =sum ;
    int ans = -1;
    while(st <= end){
        int mid = st +(end-st)/2;
        if(isvalid(nums , days , mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    int days = 4;
    vector<int> nums = {1,2,3,1,1};
    cout << working(nums, days);
}