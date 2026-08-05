/// merge 2 sorted arrays:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {4,5,6};
    int size = nums1.size();
    int m = 3 , n = 3;
    int i = m-1 , j = n-1 , idx = size -1;
    while( i >=0 && j >= 0){
        if(nums1[i] >= nums2[j]){
            nums1[idx] = nums1[i];  
            idx-- , i--;
        }else{
            nums1[idx] = nums2[j];
            idx--, j--;
        }
    }
    while(j >= 0){
        nums1[idx] = nums2[j];
        idx-- , j--;
    }
    for(int i : nums1){
        cout << i;
    }
}