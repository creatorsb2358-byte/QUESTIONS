/// to find the smallest number in an array;

#include <iostream>
using namespace std;

int main(){
    int marks[5] = {1,2,3,4,5};
    int small = INT32_MAX;
    for(int i = 0; i < 5; i++){
        if(marks[i] < small ){
            small = marks[i];
        }
        
    }
    cout << small << endl;
    return 0 ;

}


/// to find the largest number in an array;

int main1(){
    int marks[5] = {1,2,3,4,5};
    int largest = INT32_MIN;
    for(int i = 0; i < 5; i++){
        if(marks[i] > largest){
            largest = marks[i];
        }
    }
    cout << largest << endl;
    return 0;
}