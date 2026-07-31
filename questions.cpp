//painter partition problem:

#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int>& arr , int m , int limit){
    int size = arr.size();
    int student = 1 , pages = 0;
    for(int i = 0 ;i < size ; i++){
        if(arr[i] > limit){
            return false;
        }
        if(arr[i] + pages <= limit){
            pages += arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }
    if(student > m){
        return false;
    }else{
        return true;
    }
}

int main(){
    vector<int> nums = {30,50,10,60} ;
    int size = nums.size();
    int sum = 0;
    int minval = INT32_MIN;
    for(int i = 0 ;i < size ; i++){
        sum += nums[i];
        minval = max(nums[i] , minval);
    }
    int st = minval  , end = sum;
    int ans = 0;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isvalid(nums , 2 , mid)){
            end = mid-1;
            ans = mid;
        }else{
            st = mid+1;
        }
    }
    cout << ans;

}