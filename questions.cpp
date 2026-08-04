///selection sort:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int selectionsort(vector<int>& arr ){
    int size = arr.size();
    for(int i = 0 ; i< size ;i++){
        int si = i;
        for(int j = i+1 ;j < size; j++){
            if(arr[j] < arr[si]){
                si = j;   
            }
        }
        swap(arr[si],arr[i]);
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
    selectionsort(nums);
    printarray(nums);
    return 0;
}