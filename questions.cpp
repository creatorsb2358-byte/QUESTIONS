///find peak number in array:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,1,3,5,6,4};
    int st = 0;
    int end = nums.size() - 1;

    while (st < end) {
        int mid = st + (end - st) / 2;
        if (nums[mid] > nums[mid + 1]) {
            end = mid;
        } else {
            st = mid + 1;
        }
    }
    cout << st;

}