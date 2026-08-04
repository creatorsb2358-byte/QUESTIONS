///Bubble sort:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bubblesort(vector<int>& arr ){
    int size = arr.size();
    for(int i = 0 ; i< size ;i++){
        bool istrue = false;
        for(int j = 0 ;j < size-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                istrue = true;
            }
        }
        if(!istrue){
            return 0 ;
        }
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
    bubblesort(nums);
    printarray(nums);
    return 0;
}