///Koko eating banana Problem:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isvalid(vector<int>& nums, int h , int k){
    int size = nums.size();
    int hours = 0;
    for(int pile : nums){
        hours += pile / k;
        if(pile % k != 0){
            hours++;
        }
        if(hours > h){
            return false;
        }
    }
    return true;
}

int working(vector<int>& arr , int h){
    sort(arr.begin(),arr.end());
    int size = arr.size();
    int st = 1 , end = arr[size-1], ans = -1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isvalid(arr , h , mid)){
            end = mid-1;
            ans = mid;
        }else{
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,6,7,11};
    int h = 8;
    cout << working(nums , h);
}