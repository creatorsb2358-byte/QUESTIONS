/// to find a number index in array

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {7,4,2,8,3};
    int num = 8;
    for(int i = 0; i < 5; i++){
        if(arr[i] == num){
            cout << i ;
        }
    }
    return 0 ;
}