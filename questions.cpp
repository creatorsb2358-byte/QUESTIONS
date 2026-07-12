///to take intersection of 2 arrays:

#include <iostream>
using namespace std;

int main(){
    int arr1[4] = {1,2,3,4};
    int arr2[5] = {4,5,6,7,8};
    for(int i = 0 ; i < 4; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){
            if(arr1[i] == arr2[j]){
                count++;
            }
        }
        if(count > 0){
            cout << arr1[i] << " " ;
        }
    }
}