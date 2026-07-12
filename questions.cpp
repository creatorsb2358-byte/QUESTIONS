/// to swap the amx and min number in array:

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int index = 0;
    int indx = 0;
    int small = INT32_MAX;
    int large = INT32_MIN;
    for(int i = 0; i < 5; i++){
        if(arr[i] < small ){
            index = i;
        }
    }
    for(int j = 0; j < 5; j++){
        if(arr[j] < large){
            indx = j;
        }
    }
    swap(arr[index], arr[indx]);
    for(int i = 0; i<5; i++){
        cout << arr[i] << "  " ;
    }

}