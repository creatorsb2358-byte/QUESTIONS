/// binary search (recursive method) 

#include <iostream>
using namespace std;

int BS(int arr[] , int target , int st , int end){
    if(st <= end){
        int mid = st + (end-st)/2 ;
        if(arr[mid] > target){
            BS(arr , target , st , mid-1);
        }else if(arr[mid] < target){
            BS(arr , target , mid +1 , end);
        }else {
            cout << mid;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,3,5,6,9,12};
    int target = 12;
    int st = 0, end = 5;
    BS(arr , target , st , end);
}