///to print the unique element in an array:

#include <iostream>
using namespace std;

int main(){
    int arr[8] ={1,2,3,1,2,3,4,5};
    for(int i = 0; i < 8; i++){
        int count = 0;
        for(int j = 0; j< 8; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
}

