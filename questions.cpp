///Aggressive cows problem:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isvalid(vector<int> & nums , int C , int limit){
    int size = nums.size();
    int cows = 1 , laststall = nums[0];
    for(int i = 1;i < size ; i++){
        if(nums[i] - laststall >= limit ){
            cows++;
            laststall = nums[i];
        }
        if(cows == C){
        return true;
        }
    }
    return false;
}


int working(vector<int>& arr , int C){
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int st = 1 , end = arr[size-1]-arr[0] , ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isvalid(arr , C , mid)){
            ans = mid;
            st = mid+1;
            
        }else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,8,4,9};
    int C = 3 ;
    cout << working(nums , C);
}