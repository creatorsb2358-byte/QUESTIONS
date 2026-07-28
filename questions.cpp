///single number in O(log n);

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
        int size = nums.size();
        int st = 0 , end = size -1;
        if(size == 1){
            return nums[0];
        }
        while(st <= end){
            int mid = st + (end - st)/2;
            if(mid == 0 && nums[mid] != nums[mid+1]){
                return nums[mid];
            }else if( mid == size-1 && nums[size-2] == nums[mid]){
                return nums[mid];
            }
            if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid]){
                return nums[mid];
            }
            if(mid%2 == 0){
                if(nums[mid - 1] == nums[mid]){
                    end = mid-1;
                }else if(nums[mid +1] == nums[mid]){
                    st = mid+1;
                }
            }
            if(mid % 2 != 0){
                if(nums[mid+1] == nums[mid]){
                    end = mid-1;
                }else if(nums[mid -1] == nums[mid]){
                    st = mid+1;
                }
            }
        }
        return 0;

}