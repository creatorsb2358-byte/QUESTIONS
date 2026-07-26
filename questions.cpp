/// binary search 

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5,6,9,12};
    int target = 12;
    int st = 0, end = 5;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid] < target){
            st = mid+1;
        }else if(arr[mid] > target){
            end = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}