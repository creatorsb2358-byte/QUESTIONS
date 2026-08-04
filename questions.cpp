///insertion sort:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int insertionsort(vector<int>& arr ){
    int size = arr.size();
    for(int i = 1 ; i< size ;i++){
        int current = arr[i], prev = i-1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
}

int printarray(vector<int>& nums){
    int size = nums.size();
    for(int i = 0 ;i< size ;i++){
        cout << nums[i] << " ";
    }
}

int main(){
    vector<int>nums = {1,3,2,5,4};
    insertionsort(nums);
    printarray(nums);
    return 0;
}