///reversing a vector: 

#include <iostream>
#include <vector>
using namespace std;

int swapping_arr(vector<int>& nums, int size){
    int start = 0; 
    int end = size - 1;
    while(start <= end ){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> num = {1,2,3,4,5};
    
    swapping_arr(num , 5);
    for(int i : num ){
        cout << i;
    }
    
}