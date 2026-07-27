///search in a rotated sorted array;

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {5,6,7,8,4,3,2,1};
    int size = arr.size();
    int st = 1 , end = size-2;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            cout << mid;
        }
        if(arr[mid] < arr[mid+1]){
            st = mid+1;
        }else if(arr[mid] > arr[mid+1]){
            end = mid-1;
        }
    }
    return 0;
}